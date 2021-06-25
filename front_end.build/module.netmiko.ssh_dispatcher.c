/* Generated code for Python module 'netmiko.ssh_dispatcher'
 * created by Nuitka version 0.6.15.1
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_netmiko$ssh_dispatcher" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_netmiko$ssh_dispatcher;
PyDictObject *moduledict_netmiko$ssh_dispatcher;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[471];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("netmiko.ssh_dispatcher"));
        constants_created = true;
    }
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_netmiko$ssh_dispatcher(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "netmiko.ssh_dispatcher");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_abc8aa2d12c36dc12766a215eba0c9c1;
static PyCodeObject *codeobj_65aaed4344ec50b91616466a0e947e69;
static PyCodeObject *codeobj_df9bb47a87f4a072a3eba7b5f0d773d7;
static PyCodeObject *codeobj_fb07e965eded2d64bfa4739ef8e5793e;
static PyCodeObject *codeobj_91feb471d208c96a353dff4c049d86db;
static PyCodeObject *codeobj_0ed6df0dd4da3d4f784c6ff6d9078b1f;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[463]); CHECK_OBJECT(module_filename_obj);
    codeobj_abc8aa2d12c36dc12766a215eba0c9c1 = MAKE_CODEOBJECT(module_filename_obj, 297, CO_NEWLOCALS | CO_NOFREE, mod_consts[464], mod_consts[465], NULL, 1, 0, 0);
    codeobj_65aaed4344ec50b91616466a0e947e69 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[466], NULL, NULL, 0, 0, 0);
    codeobj_df9bb47a87f4a072a3eba7b5f0d773d7 = MAKE_CODEOBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[459], mod_consts[467], NULL, 0, 0, 0);
    codeobj_fb07e965eded2d64bfa4739ef8e5793e = MAKE_CODEOBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[462], mod_consts[468], NULL, 0, 0, 0);
    codeobj_91feb471d208c96a353dff4c049d86db = MAKE_CODEOBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[461], mod_consts[469], NULL, 3, 0, 0);
    codeobj_0ed6df0dd4da3d4f784c6ff6d9078b1f = MAKE_CODEOBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[470], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_netmiko$ssh_dispatcher$$$function__1_ConnectHandler();


static PyObject *MAKE_FUNCTION_netmiko$ssh_dispatcher$$$function__2_ssh_dispatcher();


static PyObject *MAKE_FUNCTION_netmiko$ssh_dispatcher$$$function__3_redispatch(PyObject *defaults);


static PyObject *MAKE_FUNCTION_netmiko$ssh_dispatcher$$$function__4_FileTransfer();


// The module function definitions.
static PyObject *impl_netmiko$ssh_dispatcher$$$function__1_ConnectHandler(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_device_type = NULL;
    PyObject *var_msg_str = NULL;
    PyObject *var_ConnectionClass = NULL;
    struct Nuitka_FrameObject *frame_df9bb47a87f4a072a3eba7b5f0d773d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_df9bb47a87f4a072a3eba7b5f0d773d7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_df9bb47a87f4a072a3eba7b5f0d773d7)) {
        Py_XDECREF(cache_frame_df9bb47a87f4a072a3eba7b5f0d773d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_df9bb47a87f4a072a3eba7b5f0d773d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_df9bb47a87f4a072a3eba7b5f0d773d7 = MAKE_FUNCTION_FRAME(codeobj_df9bb47a87f4a072a3eba7b5f0d773d7, module_netmiko$ssh_dispatcher, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_df9bb47a87f4a072a3eba7b5f0d773d7->m_type_description == NULL);
    frame_df9bb47a87f4a072a3eba7b5f0d773d7 = cache_frame_df9bb47a87f4a072a3eba7b5f0d773d7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_df9bb47a87f4a072a3eba7b5f0d773d7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_df9bb47a87f4a072a3eba7b5f0d773d7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_name_1 = par_kwargs;
        tmp_subscript_name_1 = mod_consts[0];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_device_type == NULL);
        var_device_type = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_device_type);
        tmp_compexpr_left_1 = var_device_type;
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_compexpr_right_1 == NULL)) {
            tmp_compexpr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_device_type);
        tmp_compexpr_left_2 = var_device_type;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assign_source_2 == NULL)) {
            tmp_assign_source_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_msg_str == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_msg_str = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = mod_consts[3];
        CHECK_OBJECT(var_device_type);
        tmp_compexpr_right_3 = var_device_type;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_3 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assign_source_3 == NULL)) {
            tmp_assign_source_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_3 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assign_source_3 == NULL)) {
            tmp_assign_source_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_msg_str == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_msg_str = tmp_assign_source_3;
    }
    branch_end_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_1 = mod_consts[5];
        CHECK_OBJECT(var_msg_str);
        tmp_args_element_name_1 = var_msg_str;
        frame_df9bb47a87f4a072a3eba7b5f0d773d7->m_frame.f_lineno = 311;
        tmp_make_exception_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_df9bb47a87f4a072a3eba7b5f0d773d7->m_frame.f_lineno = 310;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 310;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_device_type);
        tmp_args_element_name_2 = var_device_type;
        frame_df9bb47a87f4a072a3eba7b5f0d773d7->m_frame.f_lineno = 314;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ConnectionClass == NULL);
        var_ConnectionClass = tmp_assign_source_4;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(var_ConnectionClass);
        tmp_dircall_arg1_1 = var_ConnectionClass;
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_df9bb47a87f4a072a3eba7b5f0d773d7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_df9bb47a87f4a072a3eba7b5f0d773d7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_df9bb47a87f4a072a3eba7b5f0d773d7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_df9bb47a87f4a072a3eba7b5f0d773d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_df9bb47a87f4a072a3eba7b5f0d773d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_df9bb47a87f4a072a3eba7b5f0d773d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_df9bb47a87f4a072a3eba7b5f0d773d7,
        type_description_1,
        par_args,
        par_kwargs,
        var_device_type,
        var_msg_str,
        var_ConnectionClass
    );


    // Release cached frame if used for exception.
    if (frame_df9bb47a87f4a072a3eba7b5f0d773d7 == cache_frame_df9bb47a87f4a072a3eba7b5f0d773d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_df9bb47a87f4a072a3eba7b5f0d773d7);
        cache_frame_df9bb47a87f4a072a3eba7b5f0d773d7 = NULL;
    }

    assertFrameObject(frame_df9bb47a87f4a072a3eba7b5f0d773d7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_device_type);
    Py_DECREF(var_device_type);
    var_device_type = NULL;
    CHECK_OBJECT(var_ConnectionClass);
    Py_DECREF(var_ConnectionClass);
    var_ConnectionClass = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_device_type);
    var_device_type = NULL;
    Py_XDECREF(var_msg_str);
    var_msg_str = NULL;
    Py_XDECREF(var_ConnectionClass);
    var_ConnectionClass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_netmiko$ssh_dispatcher$$$function__2_ssh_dispatcher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device_type = python_pars[0];
    struct Nuitka_FrameObject *frame_0ed6df0dd4da3d4f784c6ff6d9078b1f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0ed6df0dd4da3d4f784c6ff6d9078b1f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0ed6df0dd4da3d4f784c6ff6d9078b1f)) {
        Py_XDECREF(cache_frame_0ed6df0dd4da3d4f784c6ff6d9078b1f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0ed6df0dd4da3d4f784c6ff6d9078b1f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0ed6df0dd4da3d4f784c6ff6d9078b1f = MAKE_FUNCTION_FRAME(codeobj_0ed6df0dd4da3d4f784c6ff6d9078b1f, module_netmiko$ssh_dispatcher, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0ed6df0dd4da3d4f784c6ff6d9078b1f->m_type_description == NULL);
    frame_0ed6df0dd4da3d4f784c6ff6d9078b1f = cache_frame_0ed6df0dd4da3d4f784c6ff6d9078b1f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0ed6df0dd4da3d4f784c6ff6d9078b1f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0ed6df0dd4da3d4f784c6ff6d9078b1f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device_type);
        tmp_subscript_name_1 = par_device_type;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ed6df0dd4da3d4f784c6ff6d9078b1f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ed6df0dd4da3d4f784c6ff6d9078b1f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ed6df0dd4da3d4f784c6ff6d9078b1f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0ed6df0dd4da3d4f784c6ff6d9078b1f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ed6df0dd4da3d4f784c6ff6d9078b1f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ed6df0dd4da3d4f784c6ff6d9078b1f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0ed6df0dd4da3d4f784c6ff6d9078b1f,
        type_description_1,
        par_device_type
    );


    // Release cached frame if used for exception.
    if (frame_0ed6df0dd4da3d4f784c6ff6d9078b1f == cache_frame_0ed6df0dd4da3d4f784c6ff6d9078b1f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0ed6df0dd4da3d4f784c6ff6d9078b1f);
        cache_frame_0ed6df0dd4da3d4f784c6ff6d9078b1f = NULL;
    }

    assertFrameObject(frame_0ed6df0dd4da3d4f784c6ff6d9078b1f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_device_type);
    Py_DECREF(par_device_type);
    par_device_type = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_device_type);
    Py_DECREF(par_device_type);
    par_device_type = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_netmiko$ssh_dispatcher$$$function__3_redispatch(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    PyObject *par_device_type = python_pars[1];
    PyObject *par_session_prep = python_pars[2];
    PyObject *var_new_class = NULL;
    struct Nuitka_FrameObject *frame_91feb471d208c96a353dff4c049d86db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_91feb471d208c96a353dff4c049d86db = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_91feb471d208c96a353dff4c049d86db)) {
        Py_XDECREF(cache_frame_91feb471d208c96a353dff4c049d86db);

#if _DEBUG_REFCOUNTS
        if (cache_frame_91feb471d208c96a353dff4c049d86db == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_91feb471d208c96a353dff4c049d86db = MAKE_FUNCTION_FRAME(codeobj_91feb471d208c96a353dff4c049d86db, module_netmiko$ssh_dispatcher, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_91feb471d208c96a353dff4c049d86db->m_type_description == NULL);
    frame_91feb471d208c96a353dff4c049d86db = cache_frame_91feb471d208c96a353dff4c049d86db;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_91feb471d208c96a353dff4c049d86db);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_91feb471d208c96a353dff4c049d86db) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device_type);
        tmp_args_element_name_1 = par_device_type;
        frame_91feb471d208c96a353dff4c049d86db->m_frame.f_lineno = 328;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_class == NULL);
        var_new_class = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_device_type);
        tmp_assattr_name_1 = par_device_type;
        CHECK_OBJECT(par_obj);
        tmp_assattr_target_1 = par_obj;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_new_class);
        tmp_assattr_name_2 = var_new_class;
        CHECK_OBJECT(par_obj);
        tmp_assattr_target_2 = par_obj;
        tmp_result = SET_ATTRIBUTE_CLASS_SLOT(tmp_assattr_target_2, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_session_prep);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_session_prep);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_obj);
        tmp_called_instance_1 = par_obj;
        frame_91feb471d208c96a353dff4c049d86db->m_frame.f_lineno = 332;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[11]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_91feb471d208c96a353dff4c049d86db);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_91feb471d208c96a353dff4c049d86db);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_91feb471d208c96a353dff4c049d86db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_91feb471d208c96a353dff4c049d86db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_91feb471d208c96a353dff4c049d86db, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_91feb471d208c96a353dff4c049d86db,
        type_description_1,
        par_obj,
        par_device_type,
        par_session_prep,
        var_new_class
    );


    // Release cached frame if used for exception.
    if (frame_91feb471d208c96a353dff4c049d86db == cache_frame_91feb471d208c96a353dff4c049d86db) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_91feb471d208c96a353dff4c049d86db);
        cache_frame_91feb471d208c96a353dff4c049d86db = NULL;
    }

    assertFrameObject(frame_91feb471d208c96a353dff4c049d86db);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_obj);
    par_obj = NULL;
    CHECK_OBJECT(par_device_type);
    Py_DECREF(par_device_type);
    par_device_type = NULL;
    CHECK_OBJECT(par_session_prep);
    Py_DECREF(par_session_prep);
    par_session_prep = NULL;
    CHECK_OBJECT(var_new_class);
    Py_DECREF(var_new_class);
    var_new_class = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_obj);
    par_obj = NULL;
    CHECK_OBJECT(par_device_type);
    Py_DECREF(par_device_type);
    par_device_type = NULL;
    CHECK_OBJECT(par_session_prep);
    Py_DECREF(par_session_prep);
    par_session_prep = NULL;
    Py_XDECREF(var_new_class);
    var_new_class = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_netmiko$ssh_dispatcher$$$function__4_FileTransfer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_device_type = NULL;
    PyObject *var_FileTransferClass = NULL;
    struct Nuitka_FrameObject *frame_fb07e965eded2d64bfa4739ef8e5793e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fb07e965eded2d64bfa4739ef8e5793e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fb07e965eded2d64bfa4739ef8e5793e)) {
        Py_XDECREF(cache_frame_fb07e965eded2d64bfa4739ef8e5793e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fb07e965eded2d64bfa4739ef8e5793e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fb07e965eded2d64bfa4739ef8e5793e = MAKE_FUNCTION_FRAME(codeobj_fb07e965eded2d64bfa4739ef8e5793e, module_netmiko$ssh_dispatcher, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fb07e965eded2d64bfa4739ef8e5793e->m_type_description == NULL);
    frame_fb07e965eded2d64bfa4739ef8e5793e = cache_frame_fb07e965eded2d64bfa4739ef8e5793e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fb07e965eded2d64bfa4739ef8e5793e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fb07e965eded2d64bfa4739ef8e5793e) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        CHECK_OBJECT(par_args);
        tmp_len_arg_1 = par_args;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[13];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        assert(!(tmp_tmp_condition_result_1_object_1 == NULL));
        tmp_condition_result_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        if (par_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_args;
        tmp_subscript_name_1 = mod_consts[15];
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_1, 0);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_device_type == NULL);
        var_device_type = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_name_4 = par_kwargs;
        tmp_subscript_name_2 = mod_consts[16];
        tmp_expression_name_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_2);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[0]);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_device_type == NULL);
        var_device_type = tmp_assign_source_2;
    }
    branch_end_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_device_type);
        tmp_compexpr_left_2 = var_device_type;
        tmp_compexpr_right_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_compexpr_right_2 == NULL)) {
            tmp_compexpr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_1;
        tmp_expression_name_5 = mod_consts[18];
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[6]);
        assert(!(tmp_called_name_1 == NULL));
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_name_1 == NULL)) {
            tmp_args_element_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 344;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_fb07e965eded2d64bfa4739ef8e5793e->m_frame.f_lineno = 343;
        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_fb07e965eded2d64bfa4739ef8e5793e->m_frame.f_lineno = 342;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 342;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_3;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_device_type);
        tmp_subscript_name_3 = var_device_type;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_FileTransferClass == NULL);
        var_FileTransferClass = tmp_assign_source_3;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(var_FileTransferClass);
        tmp_dircall_arg1_1 = var_FileTransferClass;
        if (par_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 347;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fb07e965eded2d64bfa4739ef8e5793e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fb07e965eded2d64bfa4739ef8e5793e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fb07e965eded2d64bfa4739ef8e5793e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fb07e965eded2d64bfa4739ef8e5793e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fb07e965eded2d64bfa4739ef8e5793e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fb07e965eded2d64bfa4739ef8e5793e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fb07e965eded2d64bfa4739ef8e5793e,
        type_description_1,
        par_args,
        par_kwargs,
        var_device_type,
        var_FileTransferClass
    );


    // Release cached frame if used for exception.
    if (frame_fb07e965eded2d64bfa4739ef8e5793e == cache_frame_fb07e965eded2d64bfa4739ef8e5793e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_fb07e965eded2d64bfa4739ef8e5793e);
        cache_frame_fb07e965eded2d64bfa4739ef8e5793e = NULL;
    }

    assertFrameObject(frame_fb07e965eded2d64bfa4739ef8e5793e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_device_type);
    Py_DECREF(var_device_type);
    var_device_type = NULL;
    CHECK_OBJECT(var_FileTransferClass);
    Py_DECREF(var_FileTransferClass);
    var_FileTransferClass = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_device_type);
    var_device_type = NULL;
    Py_XDECREF(var_FileTransferClass);
    var_FileTransferClass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_netmiko$ssh_dispatcher$$$function__1_ConnectHandler() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_netmiko$ssh_dispatcher$$$function__1_ConnectHandler,
        mod_consts[459],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_df9bb47a87f4a072a3eba7b5f0d773d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_netmiko$ssh_dispatcher,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_netmiko$ssh_dispatcher$$$function__2_ssh_dispatcher() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_netmiko$ssh_dispatcher$$$function__2_ssh_dispatcher,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0ed6df0dd4da3d4f784c6ff6d9078b1f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_netmiko$ssh_dispatcher,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_netmiko$ssh_dispatcher$$$function__3_redispatch(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_netmiko$ssh_dispatcher$$$function__3_redispatch,
        mod_consts[461],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_91feb471d208c96a353dff4c049d86db,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_netmiko$ssh_dispatcher,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_netmiko$ssh_dispatcher$$$function__4_FileTransfer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_netmiko$ssh_dispatcher$$$function__4_FileTransfer,
        mod_consts[462],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fb07e965eded2d64bfa4739ef8e5793e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_netmiko$ssh_dispatcher,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_netmiko$ssh_dispatcher[] = {
    impl_netmiko$ssh_dispatcher$$$function__1_ConnectHandler,
    impl_netmiko$ssh_dispatcher$$$function__2_ssh_dispatcher,
    impl_netmiko$ssh_dispatcher$$$function__3_redispatch,
    impl_netmiko$ssh_dispatcher$$$function__4_FileTransfer,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_netmiko$ssh_dispatcher;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_netmiko$ssh_dispatcher) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_netmiko$ssh_dispatcher[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_netmiko$ssh_dispatcher,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_netmiko$ssh_dispatcher(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_netmiko$ssh_dispatcher = module;

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 0x300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("netmiko.ssh_dispatcher: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("netmiko.ssh_dispatcher: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("netmiko.ssh_dispatcher: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initnetmiko$ssh_dispatcher\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_netmiko$ssh_dispatcher = MODULE_DICT(module_netmiko$ssh_dispatcher);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_netmiko$ssh_dispatcher,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_netmiko$ssh_dispatcher,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_netmiko$ssh_dispatcher,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_netmiko$ssh_dispatcher,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_netmiko$ssh_dispatcher,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_netmiko$ssh_dispatcher);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_netmiko$ssh_dispatcher);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_import_from_10__module = NULL;
    PyObject *tmp_import_from_11__module = NULL;
    PyObject *tmp_import_from_12__module = NULL;
    PyObject *tmp_import_from_13__module = NULL;
    PyObject *tmp_import_from_14__module = NULL;
    PyObject *tmp_import_from_15__module = NULL;
    PyObject *tmp_import_from_16__module = NULL;
    PyObject *tmp_import_from_17__module = NULL;
    PyObject *tmp_import_from_18__module = NULL;
    PyObject *tmp_import_from_19__module = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_20__module = NULL;
    PyObject *tmp_import_from_21__module = NULL;
    PyObject *tmp_import_from_22__module = NULL;
    PyObject *tmp_import_from_23__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    PyObject *tmp_import_from_8__module = NULL;
    PyObject *tmp_import_from_9__module = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_65aaed4344ec50b91616466a0e947e69;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_abc8aa2d12c36dc12766a215eba0c9c1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    static struct Nuitka_FrameObject *cache_frame_abc8aa2d12c36dc12766a215eba0c9c1_2 = NULL;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_65aaed4344ec50b91616466a0e947e69 = MAKE_MODULE_FRAME(codeobj_65aaed4344ec50b91616466a0e947e69, module_netmiko$ssh_dispatcher);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_65aaed4344ec50b91616466a0e947e69);
    assert(Py_REFCNT(frame_65aaed4344ec50b91616466a0e947e69) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[26], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[27], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[29];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[30];
        tmp_level_name_1 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[31],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[32];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[33];
        tmp_level_name_2 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 3;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[34],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[34]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[35];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[36];
        tmp_level_name_3 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[37],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[37]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[38],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[38]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_8);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[39];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[40];
        tmp_level_name_4 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 5;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[41],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[41]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[42];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[43];
        tmp_level_name_5 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 6;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[44],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[44]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[45],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[45]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_12);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[42];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[46];
        tmp_level_name_6 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 7;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[47],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[48];
        tmp_globals_arg_name_7 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[49];
        tmp_level_name_7 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 8;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_arg_name_7, tmp_locals_arg_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[50],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[50]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[51],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[51]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_16);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_arg_name_8;
        PyObject *tmp_locals_arg_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[52];
        tmp_globals_arg_name_8 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[53];
        tmp_level_name_8 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 9;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_arg_name_8, tmp_locals_arg_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[54],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[54]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_arg_name_9;
        PyObject *tmp_locals_arg_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = mod_consts[55];
        tmp_globals_arg_name_9 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_9 = Py_None;
        tmp_fromlist_name_9 = mod_consts[56];
        tmp_level_name_9 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 10;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_arg_name_9, tmp_locals_arg_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[57],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[57]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_arg_name_10;
        PyObject *tmp_locals_arg_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = mod_consts[58];
        tmp_globals_arg_name_10 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_10 = Py_None;
        tmp_fromlist_name_10 = mod_consts[59];
        tmp_level_name_10 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 11;
        tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_arg_name_10, tmp_locals_arg_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_13 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[60],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[60]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_14 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[61],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[61]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_21);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_arg_name_11;
        PyObject *tmp_locals_arg_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = mod_consts[62];
        tmp_globals_arg_name_11 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_11 = Py_None;
        tmp_fromlist_name_11 = mod_consts[63];
        tmp_level_name_11 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 12;
        tmp_assign_source_22 = IMPORT_MODULE5(tmp_name_name_11, tmp_globals_arg_name_11, tmp_locals_arg_name_11, tmp_fromlist_name_11, tmp_level_name_11);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_15 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[64],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[64]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_16 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[65],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[65]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_24);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_arg_name_12;
        PyObject *tmp_locals_arg_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = mod_consts[66];
        tmp_globals_arg_name_12 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_12 = Py_None;
        tmp_fromlist_name_12 = mod_consts[67];
        tmp_level_name_12 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 13;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_name_12, tmp_globals_arg_name_12, tmp_locals_arg_name_12, tmp_fromlist_name_12, tmp_level_name_12);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[68],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[68]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_arg_name_13;
        PyObject *tmp_locals_arg_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = mod_consts[69];
        tmp_globals_arg_name_13 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_13 = Py_None;
        tmp_fromlist_name_13 = mod_consts[70];
        tmp_level_name_13 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 14;
        tmp_assign_source_26 = IMPORT_MODULE5(tmp_name_name_13, tmp_globals_arg_name_13, tmp_locals_arg_name_13, tmp_fromlist_name_13, tmp_level_name_13);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_18 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[71],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[71]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_19 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[72],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[72]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_20 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[73],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[73]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_29);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_arg_name_14;
        PyObject *tmp_locals_arg_name_14;
        PyObject *tmp_fromlist_name_14;
        PyObject *tmp_level_name_14;
        tmp_name_name_14 = mod_consts[74];
        tmp_globals_arg_name_14 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_14 = Py_None;
        tmp_fromlist_name_14 = mod_consts[75];
        tmp_level_name_14 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 15;
        tmp_assign_source_30 = IMPORT_MODULE5(tmp_name_name_14, tmp_globals_arg_name_14, tmp_locals_arg_name_14, tmp_fromlist_name_14, tmp_level_name_14);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_7__module == NULL);
        tmp_import_from_7__module = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_21 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[76],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[76]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_22 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[77],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[77]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_32);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_name_15;
        PyObject *tmp_globals_arg_name_15;
        PyObject *tmp_locals_arg_name_15;
        PyObject *tmp_fromlist_name_15;
        PyObject *tmp_level_name_15;
        tmp_name_name_15 = mod_consts[74];
        tmp_globals_arg_name_15 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_15 = Py_None;
        tmp_fromlist_name_15 = mod_consts[78];
        tmp_level_name_15 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 16;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_name_15, tmp_globals_arg_name_15, tmp_locals_arg_name_15, tmp_fromlist_name_15, tmp_level_name_15);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[79],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[79]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_name_name_16;
        PyObject *tmp_globals_arg_name_16;
        PyObject *tmp_locals_arg_name_16;
        PyObject *tmp_fromlist_name_16;
        PyObject *tmp_level_name_16;
        tmp_name_name_16 = mod_consts[74];
        tmp_globals_arg_name_16 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_16 = Py_None;
        tmp_fromlist_name_16 = mod_consts[80];
        tmp_level_name_16 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 17;
        tmp_assign_source_34 = IMPORT_MODULE5(tmp_name_name_16, tmp_globals_arg_name_16, tmp_locals_arg_name_16, tmp_fromlist_name_16, tmp_level_name_16);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_8__module == NULL);
        tmp_import_from_8__module = tmp_assign_source_34;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_24 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[81],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[81]);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_25 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[82],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[82]);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_26 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[83],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_26, mod_consts[83]);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_27 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[84],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_27, mod_consts[84]);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_38);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_name_name_17;
        PyObject *tmp_globals_arg_name_17;
        PyObject *tmp_locals_arg_name_17;
        PyObject *tmp_fromlist_name_17;
        PyObject *tmp_level_name_17;
        tmp_name_name_17 = mod_consts[74];
        tmp_globals_arg_name_17 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_17 = Py_None;
        tmp_fromlist_name_17 = mod_consts[85];
        tmp_level_name_17 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 23;
        tmp_assign_source_39 = IMPORT_MODULE5(tmp_name_name_17, tmp_globals_arg_name_17, tmp_locals_arg_name_17, tmp_fromlist_name_17, tmp_level_name_17);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_9__module == NULL);
        tmp_import_from_9__module = tmp_assign_source_39;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_28 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[86],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_28, mod_consts[86]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_29 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[87],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME(tmp_import_name_from_29, mod_consts[87]);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_41);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_9__module);
    Py_DECREF(tmp_import_from_9__module);
    tmp_import_from_9__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_import_from_9__module);
    Py_DECREF(tmp_import_from_9__module);
    tmp_import_from_9__module = NULL;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_30;
        PyObject *tmp_name_name_18;
        PyObject *tmp_globals_arg_name_18;
        PyObject *tmp_locals_arg_name_18;
        PyObject *tmp_fromlist_name_18;
        PyObject *tmp_level_name_18;
        tmp_name_name_18 = mod_consts[74];
        tmp_globals_arg_name_18 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_18 = Py_None;
        tmp_fromlist_name_18 = mod_consts[88];
        tmp_level_name_18 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 24;
        tmp_import_name_from_30 = IMPORT_MODULE5(tmp_name_name_18, tmp_globals_arg_name_18, tmp_locals_arg_name_18, tmp_fromlist_name_18, tmp_level_name_18);
        if (tmp_import_name_from_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[89],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_30, mod_consts[89]);
        }

        Py_DECREF(tmp_import_name_from_30);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_31;
        PyObject *tmp_name_name_19;
        PyObject *tmp_globals_arg_name_19;
        PyObject *tmp_locals_arg_name_19;
        PyObject *tmp_fromlist_name_19;
        PyObject *tmp_level_name_19;
        tmp_name_name_19 = mod_consts[74];
        tmp_globals_arg_name_19 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_19 = Py_None;
        tmp_fromlist_name_19 = mod_consts[90];
        tmp_level_name_19 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 25;
        tmp_import_name_from_31 = IMPORT_MODULE5(tmp_name_name_19, tmp_globals_arg_name_19, tmp_locals_arg_name_19, tmp_fromlist_name_19, tmp_level_name_19);
        if (tmp_import_name_from_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[91],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_31, mod_consts[91]);
        }

        Py_DECREF(tmp_import_name_from_31);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_32;
        PyObject *tmp_name_name_20;
        PyObject *tmp_globals_arg_name_20;
        PyObject *tmp_locals_arg_name_20;
        PyObject *tmp_fromlist_name_20;
        PyObject *tmp_level_name_20;
        tmp_name_name_20 = mod_consts[74];
        tmp_globals_arg_name_20 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_20 = Py_None;
        tmp_fromlist_name_20 = mod_consts[92];
        tmp_level_name_20 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 26;
        tmp_import_name_from_32 = IMPORT_MODULE5(tmp_name_name_20, tmp_globals_arg_name_20, tmp_locals_arg_name_20, tmp_fromlist_name_20, tmp_level_name_20);
        if (tmp_import_name_from_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[93],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME(tmp_import_name_from_32, mod_consts[93]);
        }

        Py_DECREF(tmp_import_name_from_32);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_name_name_21;
        PyObject *tmp_globals_arg_name_21;
        PyObject *tmp_locals_arg_name_21;
        PyObject *tmp_fromlist_name_21;
        PyObject *tmp_level_name_21;
        tmp_name_name_21 = mod_consts[74];
        tmp_globals_arg_name_21 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_21 = Py_None;
        tmp_fromlist_name_21 = mod_consts[94];
        tmp_level_name_21 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 27;
        tmp_assign_source_45 = IMPORT_MODULE5(tmp_name_name_21, tmp_globals_arg_name_21, tmp_locals_arg_name_21, tmp_fromlist_name_21, tmp_level_name_21);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_10__module == NULL);
        tmp_import_from_10__module = tmp_assign_source_45;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_33 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[95],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME(tmp_import_name_from_33, mod_consts[95]);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_34 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[96],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_34, mod_consts[96]);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_35 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[97],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME(tmp_import_name_from_35, mod_consts[97]);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_48);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_10__module);
    Py_DECREF(tmp_import_from_10__module);
    tmp_import_from_10__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_import_from_10__module);
    Py_DECREF(tmp_import_from_10__module);
    tmp_import_from_10__module = NULL;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_36;
        PyObject *tmp_name_name_22;
        PyObject *tmp_globals_arg_name_22;
        PyObject *tmp_locals_arg_name_22;
        PyObject *tmp_fromlist_name_22;
        PyObject *tmp_level_name_22;
        tmp_name_name_22 = mod_consts[98];
        tmp_globals_arg_name_22 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_22 = Py_None;
        tmp_fromlist_name_22 = mod_consts[99];
        tmp_level_name_22 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 28;
        tmp_import_name_from_36 = IMPORT_MODULE5(tmp_name_name_22, tmp_globals_arg_name_22, tmp_locals_arg_name_22, tmp_fromlist_name_22, tmp_level_name_22);
        if (tmp_import_name_from_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[100],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_49 = IMPORT_NAME(tmp_import_name_from_36, mod_consts[100]);
        }

        Py_DECREF(tmp_import_name_from_36);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_37;
        PyObject *tmp_name_name_23;
        PyObject *tmp_globals_arg_name_23;
        PyObject *tmp_locals_arg_name_23;
        PyObject *tmp_fromlist_name_23;
        PyObject *tmp_level_name_23;
        tmp_name_name_23 = mod_consts[101];
        tmp_globals_arg_name_23 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_23 = Py_None;
        tmp_fromlist_name_23 = mod_consts[102];
        tmp_level_name_23 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 29;
        tmp_import_name_from_37 = IMPORT_MODULE5(tmp_name_name_23, tmp_globals_arg_name_23, tmp_locals_arg_name_23, tmp_fromlist_name_23, tmp_level_name_23);
        if (tmp_import_name_from_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[103],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME(tmp_import_name_from_37, mod_consts[103]);
        }

        Py_DECREF(tmp_import_name_from_37);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_38;
        PyObject *tmp_name_name_24;
        PyObject *tmp_globals_arg_name_24;
        PyObject *tmp_locals_arg_name_24;
        PyObject *tmp_fromlist_name_24;
        PyObject *tmp_level_name_24;
        tmp_name_name_24 = mod_consts[104];
        tmp_globals_arg_name_24 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_24 = Py_None;
        tmp_fromlist_name_24 = mod_consts[105];
        tmp_level_name_24 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 30;
        tmp_import_name_from_38 = IMPORT_MODULE5(tmp_name_name_24, tmp_globals_arg_name_24, tmp_locals_arg_name_24, tmp_fromlist_name_24, tmp_level_name_24);
        if (tmp_import_name_from_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_38,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[106],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME(tmp_import_name_from_38, mod_consts[106]);
        }

        Py_DECREF(tmp_import_name_from_38);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_39;
        PyObject *tmp_name_name_25;
        PyObject *tmp_globals_arg_name_25;
        PyObject *tmp_locals_arg_name_25;
        PyObject *tmp_fromlist_name_25;
        PyObject *tmp_level_name_25;
        tmp_name_name_25 = mod_consts[107];
        tmp_globals_arg_name_25 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_25 = Py_None;
        tmp_fromlist_name_25 = mod_consts[108];
        tmp_level_name_25 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 31;
        tmp_import_name_from_39 = IMPORT_MODULE5(tmp_name_name_25, tmp_globals_arg_name_25, tmp_locals_arg_name_25, tmp_fromlist_name_25, tmp_level_name_25);
        if (tmp_import_name_from_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_39,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[109],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME(tmp_import_name_from_39, mod_consts[109]);
        }

        Py_DECREF(tmp_import_name_from_39);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_40;
        PyObject *tmp_name_name_26;
        PyObject *tmp_globals_arg_name_26;
        PyObject *tmp_locals_arg_name_26;
        PyObject *tmp_fromlist_name_26;
        PyObject *tmp_level_name_26;
        tmp_name_name_26 = mod_consts[107];
        tmp_globals_arg_name_26 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_26 = Py_None;
        tmp_fromlist_name_26 = mod_consts[110];
        tmp_level_name_26 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 32;
        tmp_import_name_from_40 = IMPORT_MODULE5(tmp_name_name_26, tmp_globals_arg_name_26, tmp_locals_arg_name_26, tmp_fromlist_name_26, tmp_level_name_26);
        if (tmp_import_name_from_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_40,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[111],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME(tmp_import_name_from_40, mod_consts[111]);
        }

        Py_DECREF(tmp_import_name_from_40);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_41;
        PyObject *tmp_name_name_27;
        PyObject *tmp_globals_arg_name_27;
        PyObject *tmp_locals_arg_name_27;
        PyObject *tmp_fromlist_name_27;
        PyObject *tmp_level_name_27;
        tmp_name_name_27 = mod_consts[107];
        tmp_globals_arg_name_27 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_27 = Py_None;
        tmp_fromlist_name_27 = mod_consts[112];
        tmp_level_name_27 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 33;
        tmp_import_name_from_41 = IMPORT_MODULE5(tmp_name_name_27, tmp_globals_arg_name_27, tmp_locals_arg_name_27, tmp_fromlist_name_27, tmp_level_name_27);
        if (tmp_import_name_from_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_41,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[113],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME(tmp_import_name_from_41, mod_consts[113]);
        }

        Py_DECREF(tmp_import_name_from_41);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_name_name_28;
        PyObject *tmp_globals_arg_name_28;
        PyObject *tmp_locals_arg_name_28;
        PyObject *tmp_fromlist_name_28;
        PyObject *tmp_level_name_28;
        tmp_name_name_28 = mod_consts[107];
        tmp_globals_arg_name_28 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_28 = Py_None;
        tmp_fromlist_name_28 = mod_consts[114];
        tmp_level_name_28 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 34;
        tmp_assign_source_55 = IMPORT_MODULE5(tmp_name_name_28, tmp_globals_arg_name_28, tmp_locals_arg_name_28, tmp_fromlist_name_28, tmp_level_name_28);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_11__module == NULL);
        tmp_import_from_11__module = tmp_assign_source_55;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_42;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_42 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_42,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[115],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME(tmp_import_name_from_42, mod_consts[115]);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_43;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_43 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_43,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[116],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME(tmp_import_name_from_43, mod_consts[116]);
        }

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_57);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_11__module);
    Py_DECREF(tmp_import_from_11__module);
    tmp_import_from_11__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_import_from_11__module);
    Py_DECREF(tmp_import_from_11__module);
    tmp_import_from_11__module = NULL;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_44;
        PyObject *tmp_name_name_29;
        PyObject *tmp_globals_arg_name_29;
        PyObject *tmp_locals_arg_name_29;
        PyObject *tmp_fromlist_name_29;
        PyObject *tmp_level_name_29;
        tmp_name_name_29 = mod_consts[107];
        tmp_globals_arg_name_29 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_29 = Py_None;
        tmp_fromlist_name_29 = mod_consts[117];
        tmp_level_name_29 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 35;
        tmp_import_name_from_44 = IMPORT_MODULE5(tmp_name_name_29, tmp_globals_arg_name_29, tmp_locals_arg_name_29, tmp_fromlist_name_29, tmp_level_name_29);
        if (tmp_import_name_from_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_44,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[118],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME(tmp_import_name_from_44, mod_consts[118]);
        }

        Py_DECREF(tmp_import_name_from_44);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_45;
        PyObject *tmp_name_name_30;
        PyObject *tmp_globals_arg_name_30;
        PyObject *tmp_locals_arg_name_30;
        PyObject *tmp_fromlist_name_30;
        PyObject *tmp_level_name_30;
        tmp_name_name_30 = mod_consts[107];
        tmp_globals_arg_name_30 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_30 = Py_None;
        tmp_fromlist_name_30 = mod_consts[119];
        tmp_level_name_30 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 36;
        tmp_import_name_from_45 = IMPORT_MODULE5(tmp_name_name_30, tmp_globals_arg_name_30, tmp_locals_arg_name_30, tmp_fromlist_name_30, tmp_level_name_30);
        if (tmp_import_name_from_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_45,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[120],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME(tmp_import_name_from_45, mod_consts[120]);
        }

        Py_DECREF(tmp_import_name_from_45);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_46;
        PyObject *tmp_name_name_31;
        PyObject *tmp_globals_arg_name_31;
        PyObject *tmp_locals_arg_name_31;
        PyObject *tmp_fromlist_name_31;
        PyObject *tmp_level_name_31;
        tmp_name_name_31 = mod_consts[107];
        tmp_globals_arg_name_31 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_31 = Py_None;
        tmp_fromlist_name_31 = mod_consts[121];
        tmp_level_name_31 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 37;
        tmp_import_name_from_46 = IMPORT_MODULE5(tmp_name_name_31, tmp_globals_arg_name_31, tmp_locals_arg_name_31, tmp_fromlist_name_31, tmp_level_name_31);
        if (tmp_import_name_from_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_46,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[122],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME(tmp_import_name_from_46, mod_consts[122]);
        }

        Py_DECREF(tmp_import_name_from_46);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_name_name_32;
        PyObject *tmp_globals_arg_name_32;
        PyObject *tmp_locals_arg_name_32;
        PyObject *tmp_fromlist_name_32;
        PyObject *tmp_level_name_32;
        tmp_name_name_32 = mod_consts[123];
        tmp_globals_arg_name_32 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_32 = Py_None;
        tmp_fromlist_name_32 = mod_consts[124];
        tmp_level_name_32 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 38;
        tmp_assign_source_61 = IMPORT_MODULE5(tmp_name_name_32, tmp_globals_arg_name_32, tmp_locals_arg_name_32, tmp_fromlist_name_32, tmp_level_name_32);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_12__module == NULL);
        tmp_import_from_12__module = tmp_assign_source_61;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_import_name_from_47;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_47 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_47,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[125],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_62 = IMPORT_NAME(tmp_import_name_from_47, mod_consts[125]);
        }

        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_import_name_from_48;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_48 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_48,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[126],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_63 = IMPORT_NAME(tmp_import_name_from_48, mod_consts[126]);
        }

        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_63);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_12__module);
    Py_DECREF(tmp_import_from_12__module);
    tmp_import_from_12__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_import_from_12__module);
    Py_DECREF(tmp_import_from_12__module);
    tmp_import_from_12__module = NULL;
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_name_name_33;
        PyObject *tmp_globals_arg_name_33;
        PyObject *tmp_locals_arg_name_33;
        PyObject *tmp_fromlist_name_33;
        PyObject *tmp_level_name_33;
        tmp_name_name_33 = mod_consts[127];
        tmp_globals_arg_name_33 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_33 = Py_None;
        tmp_fromlist_name_33 = mod_consts[128];
        tmp_level_name_33 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 39;
        tmp_assign_source_64 = IMPORT_MODULE5(tmp_name_name_33, tmp_globals_arg_name_33, tmp_locals_arg_name_33, tmp_fromlist_name_33, tmp_level_name_33);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_13__module == NULL);
        tmp_import_from_13__module = tmp_assign_source_64;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_49;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_49 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_49,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[129],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_65 = IMPORT_NAME(tmp_import_name_from_49, mod_consts[129]);
        }

        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_50;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_50 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_50)) {
            tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_50,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[130],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_66 = IMPORT_NAME(tmp_import_name_from_50, mod_consts[130]);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_66);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_13__module);
    Py_DECREF(tmp_import_from_13__module);
    tmp_import_from_13__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_import_from_13__module);
    Py_DECREF(tmp_import_from_13__module);
    tmp_import_from_13__module = NULL;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_import_name_from_51;
        PyObject *tmp_name_name_34;
        PyObject *tmp_globals_arg_name_34;
        PyObject *tmp_locals_arg_name_34;
        PyObject *tmp_fromlist_name_34;
        PyObject *tmp_level_name_34;
        tmp_name_name_34 = mod_consts[131];
        tmp_globals_arg_name_34 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_34 = Py_None;
        tmp_fromlist_name_34 = mod_consts[132];
        tmp_level_name_34 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 40;
        tmp_import_name_from_51 = IMPORT_MODULE5(tmp_name_name_34, tmp_globals_arg_name_34, tmp_locals_arg_name_34, tmp_fromlist_name_34, tmp_level_name_34);
        if (tmp_import_name_from_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_51)) {
            tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_51,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[133],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_67 = IMPORT_NAME(tmp_import_name_from_51, mod_consts[133]);
        }

        Py_DECREF(tmp_import_name_from_51);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_import_name_from_52;
        PyObject *tmp_name_name_35;
        PyObject *tmp_globals_arg_name_35;
        PyObject *tmp_locals_arg_name_35;
        PyObject *tmp_fromlist_name_35;
        PyObject *tmp_level_name_35;
        tmp_name_name_35 = mod_consts[134];
        tmp_globals_arg_name_35 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_35 = Py_None;
        tmp_fromlist_name_35 = mod_consts[135];
        tmp_level_name_35 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 41;
        tmp_import_name_from_52 = IMPORT_MODULE5(tmp_name_name_35, tmp_globals_arg_name_35, tmp_locals_arg_name_35, tmp_fromlist_name_35, tmp_level_name_35);
        if (tmp_import_name_from_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_52)) {
            tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_52,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[136],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_68 = IMPORT_NAME(tmp_import_name_from_52, mod_consts[136]);
        }

        Py_DECREF(tmp_import_name_from_52);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_53;
        PyObject *tmp_name_name_36;
        PyObject *tmp_globals_arg_name_36;
        PyObject *tmp_locals_arg_name_36;
        PyObject *tmp_fromlist_name_36;
        PyObject *tmp_level_name_36;
        tmp_name_name_36 = mod_consts[137];
        tmp_globals_arg_name_36 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_36 = Py_None;
        tmp_fromlist_name_36 = mod_consts[138];
        tmp_level_name_36 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 42;
        tmp_import_name_from_53 = IMPORT_MODULE5(tmp_name_name_36, tmp_globals_arg_name_36, tmp_locals_arg_name_36, tmp_fromlist_name_36, tmp_level_name_36);
        if (tmp_import_name_from_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_53)) {
            tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_53,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[139],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_69 = IMPORT_NAME(tmp_import_name_from_53, mod_consts[139]);
        }

        Py_DECREF(tmp_import_name_from_53);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_54;
        PyObject *tmp_name_name_37;
        PyObject *tmp_globals_arg_name_37;
        PyObject *tmp_locals_arg_name_37;
        PyObject *tmp_fromlist_name_37;
        PyObject *tmp_level_name_37;
        tmp_name_name_37 = mod_consts[140];
        tmp_globals_arg_name_37 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_37 = Py_None;
        tmp_fromlist_name_37 = mod_consts[141];
        tmp_level_name_37 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 43;
        tmp_import_name_from_54 = IMPORT_MODULE5(tmp_name_name_37, tmp_globals_arg_name_37, tmp_locals_arg_name_37, tmp_fromlist_name_37, tmp_level_name_37);
        if (tmp_import_name_from_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_54)) {
            tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_54,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[142],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_70 = IMPORT_NAME(tmp_import_name_from_54, mod_consts[142]);
        }

        Py_DECREF(tmp_import_name_from_54);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_55;
        PyObject *tmp_name_name_38;
        PyObject *tmp_globals_arg_name_38;
        PyObject *tmp_locals_arg_name_38;
        PyObject *tmp_fromlist_name_38;
        PyObject *tmp_level_name_38;
        tmp_name_name_38 = mod_consts[140];
        tmp_globals_arg_name_38 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_38 = Py_None;
        tmp_fromlist_name_38 = mod_consts[143];
        tmp_level_name_38 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 44;
        tmp_import_name_from_55 = IMPORT_MODULE5(tmp_name_name_38, tmp_globals_arg_name_38, tmp_locals_arg_name_38, tmp_fromlist_name_38, tmp_level_name_38);
        if (tmp_import_name_from_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_55)) {
            tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_55,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[144],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_71 = IMPORT_NAME(tmp_import_name_from_55, mod_consts[144]);
        }

        Py_DECREF(tmp_import_name_from_55);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_import_name_from_56;
        PyObject *tmp_name_name_39;
        PyObject *tmp_globals_arg_name_39;
        PyObject *tmp_locals_arg_name_39;
        PyObject *tmp_fromlist_name_39;
        PyObject *tmp_level_name_39;
        tmp_name_name_39 = mod_consts[140];
        tmp_globals_arg_name_39 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_39 = Py_None;
        tmp_fromlist_name_39 = mod_consts[145];
        tmp_level_name_39 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 45;
        tmp_import_name_from_56 = IMPORT_MODULE5(tmp_name_name_39, tmp_globals_arg_name_39, tmp_locals_arg_name_39, tmp_fromlist_name_39, tmp_level_name_39);
        if (tmp_import_name_from_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_56)) {
            tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_56,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[146],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_72 = IMPORT_NAME(tmp_import_name_from_56, mod_consts[146]);
        }

        Py_DECREF(tmp_import_name_from_56);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_import_name_from_57;
        PyObject *tmp_name_name_40;
        PyObject *tmp_globals_arg_name_40;
        PyObject *tmp_locals_arg_name_40;
        PyObject *tmp_fromlist_name_40;
        PyObject *tmp_level_name_40;
        tmp_name_name_40 = mod_consts[140];
        tmp_globals_arg_name_40 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_40 = Py_None;
        tmp_fromlist_name_40 = mod_consts[147];
        tmp_level_name_40 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 46;
        tmp_import_name_from_57 = IMPORT_MODULE5(tmp_name_name_40, tmp_globals_arg_name_40, tmp_locals_arg_name_40, tmp_fromlist_name_40, tmp_level_name_40);
        if (tmp_import_name_from_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_57)) {
            tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_57,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[148],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_73 = IMPORT_NAME(tmp_import_name_from_57, mod_consts[148]);
        }

        Py_DECREF(tmp_import_name_from_57);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_import_name_from_58;
        PyObject *tmp_name_name_41;
        PyObject *tmp_globals_arg_name_41;
        PyObject *tmp_locals_arg_name_41;
        PyObject *tmp_fromlist_name_41;
        PyObject *tmp_level_name_41;
        tmp_name_name_41 = mod_consts[140];
        tmp_globals_arg_name_41 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_41 = Py_None;
        tmp_fromlist_name_41 = mod_consts[149];
        tmp_level_name_41 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 47;
        tmp_import_name_from_58 = IMPORT_MODULE5(tmp_name_name_41, tmp_globals_arg_name_41, tmp_locals_arg_name_41, tmp_fromlist_name_41, tmp_level_name_41);
        if (tmp_import_name_from_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_58)) {
            tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_58,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[150],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_74 = IMPORT_NAME(tmp_import_name_from_58, mod_consts[150]);
        }

        Py_DECREF(tmp_import_name_from_58);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_import_name_from_59;
        PyObject *tmp_name_name_42;
        PyObject *tmp_globals_arg_name_42;
        PyObject *tmp_locals_arg_name_42;
        PyObject *tmp_fromlist_name_42;
        PyObject *tmp_level_name_42;
        tmp_name_name_42 = mod_consts[140];
        tmp_globals_arg_name_42 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_42 = Py_None;
        tmp_fromlist_name_42 = mod_consts[151];
        tmp_level_name_42 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 48;
        tmp_import_name_from_59 = IMPORT_MODULE5(tmp_name_name_42, tmp_globals_arg_name_42, tmp_locals_arg_name_42, tmp_fromlist_name_42, tmp_level_name_42);
        if (tmp_import_name_from_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_59)) {
            tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_59,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[152],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_75 = IMPORT_NAME(tmp_import_name_from_59, mod_consts[152]);
        }

        Py_DECREF(tmp_import_name_from_59);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_import_name_from_60;
        PyObject *tmp_name_name_43;
        PyObject *tmp_globals_arg_name_43;
        PyObject *tmp_locals_arg_name_43;
        PyObject *tmp_fromlist_name_43;
        PyObject *tmp_level_name_43;
        tmp_name_name_43 = mod_consts[140];
        tmp_globals_arg_name_43 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_43 = Py_None;
        tmp_fromlist_name_43 = mod_consts[153];
        tmp_level_name_43 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 49;
        tmp_import_name_from_60 = IMPORT_MODULE5(tmp_name_name_43, tmp_globals_arg_name_43, tmp_locals_arg_name_43, tmp_fromlist_name_43, tmp_level_name_43);
        if (tmp_import_name_from_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_60)) {
            tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_60,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[154],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_76 = IMPORT_NAME(tmp_import_name_from_60, mod_consts[154]);
        }

        Py_DECREF(tmp_import_name_from_60);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_import_name_from_61;
        PyObject *tmp_name_name_44;
        PyObject *tmp_globals_arg_name_44;
        PyObject *tmp_locals_arg_name_44;
        PyObject *tmp_fromlist_name_44;
        PyObject *tmp_level_name_44;
        tmp_name_name_44 = mod_consts[140];
        tmp_globals_arg_name_44 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_44 = Py_None;
        tmp_fromlist_name_44 = mod_consts[155];
        tmp_level_name_44 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 50;
        tmp_import_name_from_61 = IMPORT_MODULE5(tmp_name_name_44, tmp_globals_arg_name_44, tmp_locals_arg_name_44, tmp_fromlist_name_44, tmp_level_name_44);
        if (tmp_import_name_from_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_61)) {
            tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_61,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[156],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_77 = IMPORT_NAME(tmp_import_name_from_61, mod_consts[156]);
        }

        Py_DECREF(tmp_import_name_from_61);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_import_name_from_62;
        PyObject *tmp_name_name_45;
        PyObject *tmp_globals_arg_name_45;
        PyObject *tmp_locals_arg_name_45;
        PyObject *tmp_fromlist_name_45;
        PyObject *tmp_level_name_45;
        tmp_name_name_45 = mod_consts[140];
        tmp_globals_arg_name_45 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_45 = Py_None;
        tmp_fromlist_name_45 = mod_consts[157];
        tmp_level_name_45 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 51;
        tmp_import_name_from_62 = IMPORT_MODULE5(tmp_name_name_45, tmp_globals_arg_name_45, tmp_locals_arg_name_45, tmp_fromlist_name_45, tmp_level_name_45);
        if (tmp_import_name_from_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_62)) {
            tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_62,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[158],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_78 = IMPORT_NAME(tmp_import_name_from_62, mod_consts[158]);
        }

        Py_DECREF(tmp_import_name_from_62);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_import_name_from_63;
        PyObject *tmp_name_name_46;
        PyObject *tmp_globals_arg_name_46;
        PyObject *tmp_locals_arg_name_46;
        PyObject *tmp_fromlist_name_46;
        PyObject *tmp_level_name_46;
        tmp_name_name_46 = mod_consts[159];
        tmp_globals_arg_name_46 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_46 = Py_None;
        tmp_fromlist_name_46 = mod_consts[160];
        tmp_level_name_46 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 52;
        tmp_import_name_from_63 = IMPORT_MODULE5(tmp_name_name_46, tmp_globals_arg_name_46, tmp_locals_arg_name_46, tmp_fromlist_name_46, tmp_level_name_46);
        if (tmp_import_name_from_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_63)) {
            tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_63,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[161],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_79 = IMPORT_NAME(tmp_import_name_from_63, mod_consts[161]);
        }

        Py_DECREF(tmp_import_name_from_63);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_import_name_from_64;
        PyObject *tmp_name_name_47;
        PyObject *tmp_globals_arg_name_47;
        PyObject *tmp_locals_arg_name_47;
        PyObject *tmp_fromlist_name_47;
        PyObject *tmp_level_name_47;
        tmp_name_name_47 = mod_consts[159];
        tmp_globals_arg_name_47 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_47 = Py_None;
        tmp_fromlist_name_47 = mod_consts[162];
        tmp_level_name_47 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 53;
        tmp_import_name_from_64 = IMPORT_MODULE5(tmp_name_name_47, tmp_globals_arg_name_47, tmp_locals_arg_name_47, tmp_fromlist_name_47, tmp_level_name_47);
        if (tmp_import_name_from_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_64)) {
            tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_64,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[163],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_80 = IMPORT_NAME(tmp_import_name_from_64, mod_consts[163]);
        }

        Py_DECREF(tmp_import_name_from_64);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_import_name_from_65;
        PyObject *tmp_name_name_48;
        PyObject *tmp_globals_arg_name_48;
        PyObject *tmp_locals_arg_name_48;
        PyObject *tmp_fromlist_name_48;
        PyObject *tmp_level_name_48;
        tmp_name_name_48 = mod_consts[164];
        tmp_globals_arg_name_48 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_48 = Py_None;
        tmp_fromlist_name_48 = mod_consts[165];
        tmp_level_name_48 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 54;
        tmp_import_name_from_65 = IMPORT_MODULE5(tmp_name_name_48, tmp_globals_arg_name_48, tmp_locals_arg_name_48, tmp_fromlist_name_48, tmp_level_name_48);
        if (tmp_import_name_from_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_65)) {
            tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_65,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[166],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_81 = IMPORT_NAME(tmp_import_name_from_65, mod_consts[166]);
        }

        Py_DECREF(tmp_import_name_from_65);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_import_name_from_66;
        PyObject *tmp_name_name_49;
        PyObject *tmp_globals_arg_name_49;
        PyObject *tmp_locals_arg_name_49;
        PyObject *tmp_fromlist_name_49;
        PyObject *tmp_level_name_49;
        tmp_name_name_49 = mod_consts[167];
        tmp_globals_arg_name_49 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_49 = Py_None;
        tmp_fromlist_name_49 = mod_consts[168];
        tmp_level_name_49 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 55;
        tmp_import_name_from_66 = IMPORT_MODULE5(tmp_name_name_49, tmp_globals_arg_name_49, tmp_locals_arg_name_49, tmp_fromlist_name_49, tmp_level_name_49);
        if (tmp_import_name_from_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_66)) {
            tmp_assign_source_82 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_66,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[169],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_82 = IMPORT_NAME(tmp_import_name_from_66, mod_consts[169]);
        }

        Py_DECREF(tmp_import_name_from_66);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_name_name_50;
        PyObject *tmp_globals_arg_name_50;
        PyObject *tmp_locals_arg_name_50;
        PyObject *tmp_fromlist_name_50;
        PyObject *tmp_level_name_50;
        tmp_name_name_50 = mod_consts[170];
        tmp_globals_arg_name_50 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_50 = Py_None;
        tmp_fromlist_name_50 = mod_consts[171];
        tmp_level_name_50 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 56;
        tmp_assign_source_83 = IMPORT_MODULE5(tmp_name_name_50, tmp_globals_arg_name_50, tmp_locals_arg_name_50, tmp_fromlist_name_50, tmp_level_name_50);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_14__module == NULL);
        tmp_import_from_14__module = tmp_assign_source_83;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_import_name_from_67;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_67 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_67)) {
            tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_67,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[172],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_84 = IMPORT_NAME(tmp_import_name_from_67, mod_consts[172]);
        }

        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_import_name_from_68;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_68 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_68)) {
            tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_68,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[173],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_85 = IMPORT_NAME(tmp_import_name_from_68, mod_consts[173]);
        }

        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_import_name_from_69;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_69 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_69)) {
            tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_69,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[174],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_86 = IMPORT_NAME(tmp_import_name_from_69, mod_consts[174]);
        }

        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_import_name_from_70;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_70 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_70)) {
            tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_70,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[175],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_87 = IMPORT_NAME(tmp_import_name_from_70, mod_consts[175]);
        }

        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_87);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_14__module);
    Py_DECREF(tmp_import_from_14__module);
    tmp_import_from_14__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_import_from_14__module);
    Py_DECREF(tmp_import_from_14__module);
    tmp_import_from_14__module = NULL;
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_name_name_51;
        PyObject *tmp_globals_arg_name_51;
        PyObject *tmp_locals_arg_name_51;
        PyObject *tmp_fromlist_name_51;
        PyObject *tmp_level_name_51;
        tmp_name_name_51 = mod_consts[176];
        tmp_globals_arg_name_51 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_51 = Py_None;
        tmp_fromlist_name_51 = mod_consts[177];
        tmp_level_name_51 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 57;
        tmp_assign_source_88 = IMPORT_MODULE5(tmp_name_name_51, tmp_globals_arg_name_51, tmp_locals_arg_name_51, tmp_fromlist_name_51, tmp_level_name_51);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_15__module == NULL);
        tmp_import_from_15__module = tmp_assign_source_88;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_import_name_from_71;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_71 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_71)) {
            tmp_assign_source_89 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_71,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[178],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_89 = IMPORT_NAME(tmp_import_name_from_71, mod_consts[178]);
        }

        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_import_name_from_72;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_72 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_72)) {
            tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_72,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[179],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_90 = IMPORT_NAME(tmp_import_name_from_72, mod_consts[179]);
        }

        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_import_name_from_73;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_73 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_73)) {
            tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_73,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[180],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_91 = IMPORT_NAME(tmp_import_name_from_73, mod_consts[180]);
        }

        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_91);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_15__module);
    Py_DECREF(tmp_import_from_15__module);
    tmp_import_from_15__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_import_from_15__module);
    Py_DECREF(tmp_import_from_15__module);
    tmp_import_from_15__module = NULL;
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_import_name_from_74;
        PyObject *tmp_name_name_52;
        PyObject *tmp_globals_arg_name_52;
        PyObject *tmp_locals_arg_name_52;
        PyObject *tmp_fromlist_name_52;
        PyObject *tmp_level_name_52;
        tmp_name_name_52 = mod_consts[176];
        tmp_globals_arg_name_52 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_52 = Py_None;
        tmp_fromlist_name_52 = mod_consts[181];
        tmp_level_name_52 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 58;
        tmp_import_name_from_74 = IMPORT_MODULE5(tmp_name_name_52, tmp_globals_arg_name_52, tmp_locals_arg_name_52, tmp_fromlist_name_52, tmp_level_name_52);
        if (tmp_import_name_from_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_74)) {
            tmp_assign_source_92 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_74,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[182],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_92 = IMPORT_NAME(tmp_import_name_from_74, mod_consts[182]);
        }

        Py_DECREF(tmp_import_name_from_74);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_name_name_53;
        PyObject *tmp_globals_arg_name_53;
        PyObject *tmp_locals_arg_name_53;
        PyObject *tmp_fromlist_name_53;
        PyObject *tmp_level_name_53;
        tmp_name_name_53 = mod_consts[183];
        tmp_globals_arg_name_53 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_53 = Py_None;
        tmp_fromlist_name_53 = mod_consts[184];
        tmp_level_name_53 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 59;
        tmp_assign_source_93 = IMPORT_MODULE5(tmp_name_name_53, tmp_globals_arg_name_53, tmp_locals_arg_name_53, tmp_fromlist_name_53, tmp_level_name_53);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_16__module == NULL);
        tmp_import_from_16__module = tmp_assign_source_93;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_import_name_from_75;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_75 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_75)) {
            tmp_assign_source_94 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_75,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[185],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_94 = IMPORT_NAME(tmp_import_name_from_75, mod_consts[185]);
        }

        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_import_name_from_76;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_76 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_76)) {
            tmp_assign_source_95 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_76,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[186],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_95 = IMPORT_NAME(tmp_import_name_from_76, mod_consts[186]);
        }

        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_95);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_16__module);
    Py_DECREF(tmp_import_from_16__module);
    tmp_import_from_16__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_import_from_16__module);
    Py_DECREF(tmp_import_from_16__module);
    tmp_import_from_16__module = NULL;
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_name_name_54;
        PyObject *tmp_globals_arg_name_54;
        PyObject *tmp_locals_arg_name_54;
        PyObject *tmp_fromlist_name_54;
        PyObject *tmp_level_name_54;
        tmp_name_name_54 = mod_consts[187];
        tmp_globals_arg_name_54 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_54 = Py_None;
        tmp_fromlist_name_54 = mod_consts[188];
        tmp_level_name_54 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 60;
        tmp_assign_source_96 = IMPORT_MODULE5(tmp_name_name_54, tmp_globals_arg_name_54, tmp_locals_arg_name_54, tmp_fromlist_name_54, tmp_level_name_54);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_17__module == NULL);
        tmp_import_from_17__module = tmp_assign_source_96;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_import_name_from_77;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_77 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_77)) {
            tmp_assign_source_97 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_77,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[189],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_97 = IMPORT_NAME(tmp_import_name_from_77, mod_consts[189]);
        }

        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_import_name_from_78;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_78 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_78)) {
            tmp_assign_source_98 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_78,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[190],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_98 = IMPORT_NAME(tmp_import_name_from_78, mod_consts[190]);
        }

        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_import_name_from_79;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_79 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_79)) {
            tmp_assign_source_99 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_79,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[191],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_99 = IMPORT_NAME(tmp_import_name_from_79, mod_consts[191]);
        }

        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_99);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_17__module);
    Py_DECREF(tmp_import_from_17__module);
    tmp_import_from_17__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_import_from_17__module);
    Py_DECREF(tmp_import_from_17__module);
    tmp_import_from_17__module = NULL;
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_import_name_from_80;
        PyObject *tmp_name_name_55;
        PyObject *tmp_globals_arg_name_55;
        PyObject *tmp_locals_arg_name_55;
        PyObject *tmp_fromlist_name_55;
        PyObject *tmp_level_name_55;
        tmp_name_name_55 = mod_consts[187];
        tmp_globals_arg_name_55 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_55 = Py_None;
        tmp_fromlist_name_55 = mod_consts[192];
        tmp_level_name_55 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 61;
        tmp_import_name_from_80 = IMPORT_MODULE5(tmp_name_name_55, tmp_globals_arg_name_55, tmp_locals_arg_name_55, tmp_fromlist_name_55, tmp_level_name_55);
        if (tmp_import_name_from_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_80)) {
            tmp_assign_source_100 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_80,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[193],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_100 = IMPORT_NAME(tmp_import_name_from_80, mod_consts[193]);
        }

        Py_DECREF(tmp_import_name_from_80);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_name_name_56;
        PyObject *tmp_globals_arg_name_56;
        PyObject *tmp_locals_arg_name_56;
        PyObject *tmp_fromlist_name_56;
        PyObject *tmp_level_name_56;
        tmp_name_name_56 = mod_consts[194];
        tmp_globals_arg_name_56 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_56 = Py_None;
        tmp_fromlist_name_56 = mod_consts[195];
        tmp_level_name_56 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 62;
        tmp_assign_source_101 = IMPORT_MODULE5(tmp_name_name_56, tmp_globals_arg_name_56, tmp_locals_arg_name_56, tmp_fromlist_name_56, tmp_level_name_56);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_18__module == NULL);
        tmp_import_from_18__module = tmp_assign_source_101;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_import_name_from_81;
        CHECK_OBJECT(tmp_import_from_18__module);
        tmp_import_name_from_81 = tmp_import_from_18__module;
        if (PyModule_Check(tmp_import_name_from_81)) {
            tmp_assign_source_102 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_81,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[196],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_102 = IMPORT_NAME(tmp_import_name_from_81, mod_consts[196]);
        }

        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_import_name_from_82;
        CHECK_OBJECT(tmp_import_from_18__module);
        tmp_import_name_from_82 = tmp_import_from_18__module;
        if (PyModule_Check(tmp_import_name_from_82)) {
            tmp_assign_source_103 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_82,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[197],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_103 = IMPORT_NAME(tmp_import_name_from_82, mod_consts[197]);
        }

        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_103);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_18__module);
    Py_DECREF(tmp_import_from_18__module);
    tmp_import_from_18__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_import_from_18__module);
    Py_DECREF(tmp_import_from_18__module);
    tmp_import_from_18__module = NULL;
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_name_name_57;
        PyObject *tmp_globals_arg_name_57;
        PyObject *tmp_locals_arg_name_57;
        PyObject *tmp_fromlist_name_57;
        PyObject *tmp_level_name_57;
        tmp_name_name_57 = mod_consts[198];
        tmp_globals_arg_name_57 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_57 = Py_None;
        tmp_fromlist_name_57 = mod_consts[199];
        tmp_level_name_57 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 63;
        tmp_assign_source_104 = IMPORT_MODULE5(tmp_name_name_57, tmp_globals_arg_name_57, tmp_locals_arg_name_57, tmp_fromlist_name_57, tmp_level_name_57);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_19__module == NULL);
        tmp_import_from_19__module = tmp_assign_source_104;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_import_name_from_83;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_83 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_83)) {
            tmp_assign_source_105 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_83,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[200],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_105 = IMPORT_NAME(tmp_import_name_from_83, mod_consts[200]);
        }

        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_import_name_from_84;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_84 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_84)) {
            tmp_assign_source_106 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_84,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[201],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_106 = IMPORT_NAME(tmp_import_name_from_84, mod_consts[201]);
        }

        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_106);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_19__module);
    Py_DECREF(tmp_import_from_19__module);
    tmp_import_from_19__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_import_from_19__module);
    Py_DECREF(tmp_import_from_19__module);
    tmp_import_from_19__module = NULL;
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_import_name_from_85;
        PyObject *tmp_name_name_58;
        PyObject *tmp_globals_arg_name_58;
        PyObject *tmp_locals_arg_name_58;
        PyObject *tmp_fromlist_name_58;
        PyObject *tmp_level_name_58;
        tmp_name_name_58 = mod_consts[202];
        tmp_globals_arg_name_58 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_58 = Py_None;
        tmp_fromlist_name_58 = mod_consts[203];
        tmp_level_name_58 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 64;
        tmp_import_name_from_85 = IMPORT_MODULE5(tmp_name_name_58, tmp_globals_arg_name_58, tmp_locals_arg_name_58, tmp_fromlist_name_58, tmp_level_name_58);
        if (tmp_import_name_from_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_85)) {
            tmp_assign_source_107 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_85,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[204],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_107 = IMPORT_NAME(tmp_import_name_from_85, mod_consts[204]);
        }

        Py_DECREF(tmp_import_name_from_85);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_import_name_from_86;
        PyObject *tmp_name_name_59;
        PyObject *tmp_globals_arg_name_59;
        PyObject *tmp_locals_arg_name_59;
        PyObject *tmp_fromlist_name_59;
        PyObject *tmp_level_name_59;
        tmp_name_name_59 = mod_consts[202];
        tmp_globals_arg_name_59 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_59 = Py_None;
        tmp_fromlist_name_59 = mod_consts[205];
        tmp_level_name_59 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 65;
        tmp_import_name_from_86 = IMPORT_MODULE5(tmp_name_name_59, tmp_globals_arg_name_59, tmp_locals_arg_name_59, tmp_fromlist_name_59, tmp_level_name_59);
        if (tmp_import_name_from_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_86)) {
            tmp_assign_source_108 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_86,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[206],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_108 = IMPORT_NAME(tmp_import_name_from_86, mod_consts[206]);
        }

        Py_DECREF(tmp_import_name_from_86);
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_import_name_from_87;
        PyObject *tmp_name_name_60;
        PyObject *tmp_globals_arg_name_60;
        PyObject *tmp_locals_arg_name_60;
        PyObject *tmp_fromlist_name_60;
        PyObject *tmp_level_name_60;
        tmp_name_name_60 = mod_consts[207];
        tmp_globals_arg_name_60 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_60 = Py_None;
        tmp_fromlist_name_60 = mod_consts[208];
        tmp_level_name_60 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 66;
        tmp_import_name_from_87 = IMPORT_MODULE5(tmp_name_name_60, tmp_globals_arg_name_60, tmp_locals_arg_name_60, tmp_fromlist_name_60, tmp_level_name_60);
        if (tmp_import_name_from_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_87)) {
            tmp_assign_source_109 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_87,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[209],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_109 = IMPORT_NAME(tmp_import_name_from_87, mod_consts[209]);
        }

        Py_DECREF(tmp_import_name_from_87);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_import_name_from_88;
        PyObject *tmp_name_name_61;
        PyObject *tmp_globals_arg_name_61;
        PyObject *tmp_locals_arg_name_61;
        PyObject *tmp_fromlist_name_61;
        PyObject *tmp_level_name_61;
        tmp_name_name_61 = mod_consts[210];
        tmp_globals_arg_name_61 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_61 = Py_None;
        tmp_fromlist_name_61 = mod_consts[211];
        tmp_level_name_61 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 67;
        tmp_import_name_from_88 = IMPORT_MODULE5(tmp_name_name_61, tmp_globals_arg_name_61, tmp_locals_arg_name_61, tmp_fromlist_name_61, tmp_level_name_61);
        if (tmp_import_name_from_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_88)) {
            tmp_assign_source_110 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_88,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[212],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_110 = IMPORT_NAME(tmp_import_name_from_88, mod_consts[212]);
        }

        Py_DECREF(tmp_import_name_from_88);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_import_name_from_89;
        PyObject *tmp_name_name_62;
        PyObject *tmp_globals_arg_name_62;
        PyObject *tmp_locals_arg_name_62;
        PyObject *tmp_fromlist_name_62;
        PyObject *tmp_level_name_62;
        tmp_name_name_62 = mod_consts[210];
        tmp_globals_arg_name_62 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_62 = Py_None;
        tmp_fromlist_name_62 = mod_consts[213];
        tmp_level_name_62 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 68;
        tmp_import_name_from_89 = IMPORT_MODULE5(tmp_name_name_62, tmp_globals_arg_name_62, tmp_locals_arg_name_62, tmp_fromlist_name_62, tmp_level_name_62);
        if (tmp_import_name_from_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_89)) {
            tmp_assign_source_111 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_89,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[214],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_111 = IMPORT_NAME(tmp_import_name_from_89, mod_consts[214]);
        }

        Py_DECREF(tmp_import_name_from_89);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_import_name_from_90;
        PyObject *tmp_name_name_63;
        PyObject *tmp_globals_arg_name_63;
        PyObject *tmp_locals_arg_name_63;
        PyObject *tmp_fromlist_name_63;
        PyObject *tmp_level_name_63;
        tmp_name_name_63 = mod_consts[215];
        tmp_globals_arg_name_63 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_63 = Py_None;
        tmp_fromlist_name_63 = mod_consts[216];
        tmp_level_name_63 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 69;
        tmp_import_name_from_90 = IMPORT_MODULE5(tmp_name_name_63, tmp_globals_arg_name_63, tmp_locals_arg_name_63, tmp_fromlist_name_63, tmp_level_name_63);
        if (tmp_import_name_from_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_90)) {
            tmp_assign_source_112 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_90,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[217],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_112 = IMPORT_NAME(tmp_import_name_from_90, mod_consts[217]);
        }

        Py_DECREF(tmp_import_name_from_90);
        if (tmp_assign_source_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_name_name_64;
        PyObject *tmp_globals_arg_name_64;
        PyObject *tmp_locals_arg_name_64;
        PyObject *tmp_fromlist_name_64;
        PyObject *tmp_level_name_64;
        tmp_name_name_64 = mod_consts[218];
        tmp_globals_arg_name_64 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_64 = Py_None;
        tmp_fromlist_name_64 = mod_consts[219];
        tmp_level_name_64 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 70;
        tmp_assign_source_113 = IMPORT_MODULE5(tmp_name_name_64, tmp_globals_arg_name_64, tmp_locals_arg_name_64, tmp_fromlist_name_64, tmp_level_name_64);
        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_20__module == NULL);
        tmp_import_from_20__module = tmp_assign_source_113;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_import_name_from_91;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_91 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_91)) {
            tmp_assign_source_114 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_91,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[220],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_114 = IMPORT_NAME(tmp_import_name_from_91, mod_consts[220]);
        }

        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_import_name_from_92;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_92 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_92)) {
            tmp_assign_source_115 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_92,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[221],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_115 = IMPORT_NAME(tmp_import_name_from_92, mod_consts[221]);
        }

        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_115);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_20__module);
    Py_DECREF(tmp_import_from_20__module);
    tmp_import_from_20__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_import_from_20__module);
    Py_DECREF(tmp_import_from_20__module);
    tmp_import_from_20__module = NULL;
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_import_name_from_93;
        PyObject *tmp_name_name_65;
        PyObject *tmp_globals_arg_name_65;
        PyObject *tmp_locals_arg_name_65;
        PyObject *tmp_fromlist_name_65;
        PyObject *tmp_level_name_65;
        tmp_name_name_65 = mod_consts[222];
        tmp_globals_arg_name_65 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_65 = Py_None;
        tmp_fromlist_name_65 = mod_consts[223];
        tmp_level_name_65 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 71;
        tmp_import_name_from_93 = IMPORT_MODULE5(tmp_name_name_65, tmp_globals_arg_name_65, tmp_locals_arg_name_65, tmp_fromlist_name_65, tmp_level_name_65);
        if (tmp_import_name_from_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_93)) {
            tmp_assign_source_116 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_93,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[224],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_116 = IMPORT_NAME(tmp_import_name_from_93, mod_consts[224]);
        }

        Py_DECREF(tmp_import_name_from_93);
        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_name_name_66;
        PyObject *tmp_globals_arg_name_66;
        PyObject *tmp_locals_arg_name_66;
        PyObject *tmp_fromlist_name_66;
        PyObject *tmp_level_name_66;
        tmp_name_name_66 = mod_consts[225];
        tmp_globals_arg_name_66 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_66 = Py_None;
        tmp_fromlist_name_66 = mod_consts[226];
        tmp_level_name_66 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 72;
        tmp_assign_source_117 = IMPORT_MODULE5(tmp_name_name_66, tmp_globals_arg_name_66, tmp_locals_arg_name_66, tmp_fromlist_name_66, tmp_level_name_66);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_21__module == NULL);
        tmp_import_from_21__module = tmp_assign_source_117;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_import_name_from_94;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_94 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_94)) {
            tmp_assign_source_118 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_94,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[227],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_118 = IMPORT_NAME(tmp_import_name_from_94, mod_consts[227]);
        }

        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_import_name_from_95;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_95 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_95)) {
            tmp_assign_source_119 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_95,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[228],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_119 = IMPORT_NAME(tmp_import_name_from_95, mod_consts[228]);
        }

        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_119);
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_21__module);
    Py_DECREF(tmp_import_from_21__module);
    tmp_import_from_21__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_import_from_21__module);
    Py_DECREF(tmp_import_from_21__module);
    tmp_import_from_21__module = NULL;
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_import_name_from_96;
        PyObject *tmp_name_name_67;
        PyObject *tmp_globals_arg_name_67;
        PyObject *tmp_locals_arg_name_67;
        PyObject *tmp_fromlist_name_67;
        PyObject *tmp_level_name_67;
        tmp_name_name_67 = mod_consts[229];
        tmp_globals_arg_name_67 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_67 = Py_None;
        tmp_fromlist_name_67 = mod_consts[230];
        tmp_level_name_67 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 73;
        tmp_import_name_from_96 = IMPORT_MODULE5(tmp_name_name_67, tmp_globals_arg_name_67, tmp_locals_arg_name_67, tmp_fromlist_name_67, tmp_level_name_67);
        if (tmp_import_name_from_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_96)) {
            tmp_assign_source_120 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_96,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[231],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_120 = IMPORT_NAME(tmp_import_name_from_96, mod_consts[231]);
        }

        Py_DECREF(tmp_import_name_from_96);
        if (tmp_assign_source_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_import_name_from_97;
        PyObject *tmp_name_name_68;
        PyObject *tmp_globals_arg_name_68;
        PyObject *tmp_locals_arg_name_68;
        PyObject *tmp_fromlist_name_68;
        PyObject *tmp_level_name_68;
        tmp_name_name_68 = mod_consts[232];
        tmp_globals_arg_name_68 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_68 = Py_None;
        tmp_fromlist_name_68 = mod_consts[233];
        tmp_level_name_68 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 74;
        tmp_import_name_from_97 = IMPORT_MODULE5(tmp_name_name_68, tmp_globals_arg_name_68, tmp_locals_arg_name_68, tmp_fromlist_name_68, tmp_level_name_68);
        if (tmp_import_name_from_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_97)) {
            tmp_assign_source_121 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_97,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[234],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_121 = IMPORT_NAME(tmp_import_name_from_97, mod_consts[234]);
        }

        Py_DECREF(tmp_import_name_from_97);
        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_import_name_from_98;
        PyObject *tmp_name_name_69;
        PyObject *tmp_globals_arg_name_69;
        PyObject *tmp_locals_arg_name_69;
        PyObject *tmp_fromlist_name_69;
        PyObject *tmp_level_name_69;
        tmp_name_name_69 = mod_consts[232];
        tmp_globals_arg_name_69 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_69 = Py_None;
        tmp_fromlist_name_69 = mod_consts[235];
        tmp_level_name_69 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 75;
        tmp_import_name_from_98 = IMPORT_MODULE5(tmp_name_name_69, tmp_globals_arg_name_69, tmp_locals_arg_name_69, tmp_fromlist_name_69, tmp_level_name_69);
        if (tmp_import_name_from_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_98)) {
            tmp_assign_source_122 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_98,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[236],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_122 = IMPORT_NAME(tmp_import_name_from_98, mod_consts[236]);
        }

        Py_DECREF(tmp_import_name_from_98);
        if (tmp_assign_source_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_import_name_from_99;
        PyObject *tmp_name_name_70;
        PyObject *tmp_globals_arg_name_70;
        PyObject *tmp_locals_arg_name_70;
        PyObject *tmp_fromlist_name_70;
        PyObject *tmp_level_name_70;
        tmp_name_name_70 = mod_consts[237];
        tmp_globals_arg_name_70 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_70 = Py_None;
        tmp_fromlist_name_70 = mod_consts[238];
        tmp_level_name_70 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 76;
        tmp_import_name_from_99 = IMPORT_MODULE5(tmp_name_name_70, tmp_globals_arg_name_70, tmp_locals_arg_name_70, tmp_fromlist_name_70, tmp_level_name_70);
        if (tmp_import_name_from_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_99)) {
            tmp_assign_source_123 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_99,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[239],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_123 = IMPORT_NAME(tmp_import_name_from_99, mod_consts[239]);
        }

        Py_DECREF(tmp_import_name_from_99);
        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_import_name_from_100;
        PyObject *tmp_name_name_71;
        PyObject *tmp_globals_arg_name_71;
        PyObject *tmp_locals_arg_name_71;
        PyObject *tmp_fromlist_name_71;
        PyObject *tmp_level_name_71;
        tmp_name_name_71 = mod_consts[240];
        tmp_globals_arg_name_71 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_71 = Py_None;
        tmp_fromlist_name_71 = mod_consts[241];
        tmp_level_name_71 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 77;
        tmp_import_name_from_100 = IMPORT_MODULE5(tmp_name_name_71, tmp_globals_arg_name_71, tmp_locals_arg_name_71, tmp_fromlist_name_71, tmp_level_name_71);
        if (tmp_import_name_from_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_100)) {
            tmp_assign_source_124 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_100,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[242],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_124 = IMPORT_NAME(tmp_import_name_from_100, mod_consts[242]);
        }

        Py_DECREF(tmp_import_name_from_100);
        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_import_name_from_101;
        PyObject *tmp_name_name_72;
        PyObject *tmp_globals_arg_name_72;
        PyObject *tmp_locals_arg_name_72;
        PyObject *tmp_fromlist_name_72;
        PyObject *tmp_level_name_72;
        tmp_name_name_72 = mod_consts[243];
        tmp_globals_arg_name_72 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_72 = Py_None;
        tmp_fromlist_name_72 = mod_consts[244];
        tmp_level_name_72 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 78;
        tmp_import_name_from_101 = IMPORT_MODULE5(tmp_name_name_72, tmp_globals_arg_name_72, tmp_locals_arg_name_72, tmp_fromlist_name_72, tmp_level_name_72);
        if (tmp_import_name_from_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_101)) {
            tmp_assign_source_125 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_101,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[245],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_125 = IMPORT_NAME(tmp_import_name_from_101, mod_consts[245]);
        }

        Py_DECREF(tmp_import_name_from_101);
        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_import_name_from_102;
        PyObject *tmp_name_name_73;
        PyObject *tmp_globals_arg_name_73;
        PyObject *tmp_locals_arg_name_73;
        PyObject *tmp_fromlist_name_73;
        PyObject *tmp_level_name_73;
        tmp_name_name_73 = mod_consts[243];
        tmp_globals_arg_name_73 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_73 = Py_None;
        tmp_fromlist_name_73 = mod_consts[246];
        tmp_level_name_73 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 79;
        tmp_import_name_from_102 = IMPORT_MODULE5(tmp_name_name_73, tmp_globals_arg_name_73, tmp_locals_arg_name_73, tmp_fromlist_name_73, tmp_level_name_73);
        if (tmp_import_name_from_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_102)) {
            tmp_assign_source_126 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_102,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[247],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_126 = IMPORT_NAME(tmp_import_name_from_102, mod_consts[247]);
        }

        Py_DECREF(tmp_import_name_from_102);
        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_import_name_from_103;
        PyObject *tmp_name_name_74;
        PyObject *tmp_globals_arg_name_74;
        PyObject *tmp_locals_arg_name_74;
        PyObject *tmp_fromlist_name_74;
        PyObject *tmp_level_name_74;
        tmp_name_name_74 = mod_consts[248];
        tmp_globals_arg_name_74 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_74 = Py_None;
        tmp_fromlist_name_74 = mod_consts[249];
        tmp_level_name_74 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 80;
        tmp_import_name_from_103 = IMPORT_MODULE5(tmp_name_name_74, tmp_globals_arg_name_74, tmp_locals_arg_name_74, tmp_fromlist_name_74, tmp_level_name_74);
        if (tmp_import_name_from_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_103)) {
            tmp_assign_source_127 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_103,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[250],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_127 = IMPORT_NAME(tmp_import_name_from_103, mod_consts[250]);
        }

        Py_DECREF(tmp_import_name_from_103);
        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_import_name_from_104;
        PyObject *tmp_name_name_75;
        PyObject *tmp_globals_arg_name_75;
        PyObject *tmp_locals_arg_name_75;
        PyObject *tmp_fromlist_name_75;
        PyObject *tmp_level_name_75;
        tmp_name_name_75 = mod_consts[248];
        tmp_globals_arg_name_75 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_75 = Py_None;
        tmp_fromlist_name_75 = mod_consts[251];
        tmp_level_name_75 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 81;
        tmp_import_name_from_104 = IMPORT_MODULE5(tmp_name_name_75, tmp_globals_arg_name_75, tmp_locals_arg_name_75, tmp_fromlist_name_75, tmp_level_name_75);
        if (tmp_import_name_from_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_104)) {
            tmp_assign_source_128 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_104,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[252],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_128 = IMPORT_NAME(tmp_import_name_from_104, mod_consts[252]);
        }

        Py_DECREF(tmp_import_name_from_104);
        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_import_name_from_105;
        PyObject *tmp_name_name_76;
        PyObject *tmp_globals_arg_name_76;
        PyObject *tmp_locals_arg_name_76;
        PyObject *tmp_fromlist_name_76;
        PyObject *tmp_level_name_76;
        tmp_name_name_76 = mod_consts[253];
        tmp_globals_arg_name_76 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_76 = Py_None;
        tmp_fromlist_name_76 = mod_consts[254];
        tmp_level_name_76 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 82;
        tmp_import_name_from_105 = IMPORT_MODULE5(tmp_name_name_76, tmp_globals_arg_name_76, tmp_locals_arg_name_76, tmp_fromlist_name_76, tmp_level_name_76);
        if (tmp_import_name_from_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_105)) {
            tmp_assign_source_129 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_105,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[255],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_129 = IMPORT_NAME(tmp_import_name_from_105, mod_consts[255]);
        }

        Py_DECREF(tmp_import_name_from_105);
        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_import_name_from_106;
        PyObject *tmp_name_name_77;
        PyObject *tmp_globals_arg_name_77;
        PyObject *tmp_locals_arg_name_77;
        PyObject *tmp_fromlist_name_77;
        PyObject *tmp_level_name_77;
        tmp_name_name_77 = mod_consts[253];
        tmp_globals_arg_name_77 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_77 = Py_None;
        tmp_fromlist_name_77 = mod_consts[256];
        tmp_level_name_77 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 83;
        tmp_import_name_from_106 = IMPORT_MODULE5(tmp_name_name_77, tmp_globals_arg_name_77, tmp_locals_arg_name_77, tmp_fromlist_name_77, tmp_level_name_77);
        if (tmp_import_name_from_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_106)) {
            tmp_assign_source_130 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_106,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[257],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_130 = IMPORT_NAME(tmp_import_name_from_106, mod_consts[257]);
        }

        Py_DECREF(tmp_import_name_from_106);
        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_name_name_78;
        PyObject *tmp_globals_arg_name_78;
        PyObject *tmp_locals_arg_name_78;
        PyObject *tmp_fromlist_name_78;
        PyObject *tmp_level_name_78;
        tmp_name_name_78 = mod_consts[258];
        tmp_globals_arg_name_78 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_78 = Py_None;
        tmp_fromlist_name_78 = mod_consts[259];
        tmp_level_name_78 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 84;
        tmp_assign_source_131 = IMPORT_MODULE5(tmp_name_name_78, tmp_globals_arg_name_78, tmp_locals_arg_name_78, tmp_fromlist_name_78, tmp_level_name_78);
        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_22__module == NULL);
        tmp_import_from_22__module = tmp_assign_source_131;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_import_name_from_107;
        CHECK_OBJECT(tmp_import_from_22__module);
        tmp_import_name_from_107 = tmp_import_from_22__module;
        if (PyModule_Check(tmp_import_name_from_107)) {
            tmp_assign_source_132 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_107,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[260],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_132 = IMPORT_NAME(tmp_import_name_from_107, mod_consts[260]);
        }

        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_import_name_from_108;
        CHECK_OBJECT(tmp_import_from_22__module);
        tmp_import_name_from_108 = tmp_import_from_22__module;
        if (PyModule_Check(tmp_import_name_from_108)) {
            tmp_assign_source_133 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_108,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[261],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_133 = IMPORT_NAME(tmp_import_name_from_108, mod_consts[261]);
        }

        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_133);
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_22__module);
    Py_DECREF(tmp_import_from_22__module);
    tmp_import_from_22__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_import_from_22__module);
    Py_DECREF(tmp_import_from_22__module);
    tmp_import_from_22__module = NULL;
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_import_name_from_109;
        PyObject *tmp_name_name_79;
        PyObject *tmp_globals_arg_name_79;
        PyObject *tmp_locals_arg_name_79;
        PyObject *tmp_fromlist_name_79;
        PyObject *tmp_level_name_79;
        tmp_name_name_79 = mod_consts[262];
        tmp_globals_arg_name_79 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_79 = Py_None;
        tmp_fromlist_name_79 = mod_consts[263];
        tmp_level_name_79 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 85;
        tmp_import_name_from_109 = IMPORT_MODULE5(tmp_name_name_79, tmp_globals_arg_name_79, tmp_locals_arg_name_79, tmp_fromlist_name_79, tmp_level_name_79);
        if (tmp_import_name_from_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_109)) {
            tmp_assign_source_134 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_109,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[264],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_134 = IMPORT_NAME(tmp_import_name_from_109, mod_consts[264]);
        }

        Py_DECREF(tmp_import_name_from_109);
        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_import_name_from_110;
        PyObject *tmp_name_name_80;
        PyObject *tmp_globals_arg_name_80;
        PyObject *tmp_locals_arg_name_80;
        PyObject *tmp_fromlist_name_80;
        PyObject *tmp_level_name_80;
        tmp_name_name_80 = mod_consts[265];
        tmp_globals_arg_name_80 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_80 = Py_None;
        tmp_fromlist_name_80 = mod_consts[266];
        tmp_level_name_80 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 86;
        tmp_import_name_from_110 = IMPORT_MODULE5(tmp_name_name_80, tmp_globals_arg_name_80, tmp_locals_arg_name_80, tmp_fromlist_name_80, tmp_level_name_80);
        if (tmp_import_name_from_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_110)) {
            tmp_assign_source_135 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_110,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[267],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_135 = IMPORT_NAME(tmp_import_name_from_110, mod_consts[267]);
        }

        Py_DECREF(tmp_import_name_from_110);
        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_import_name_from_111;
        PyObject *tmp_name_name_81;
        PyObject *tmp_globals_arg_name_81;
        PyObject *tmp_locals_arg_name_81;
        PyObject *tmp_fromlist_name_81;
        PyObject *tmp_level_name_81;
        tmp_name_name_81 = mod_consts[268];
        tmp_globals_arg_name_81 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_81 = Py_None;
        tmp_fromlist_name_81 = mod_consts[269];
        tmp_level_name_81 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 87;
        tmp_import_name_from_111 = IMPORT_MODULE5(tmp_name_name_81, tmp_globals_arg_name_81, tmp_locals_arg_name_81, tmp_fromlist_name_81, tmp_level_name_81);
        if (tmp_import_name_from_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_111)) {
            tmp_assign_source_136 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_111,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[270],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_136 = IMPORT_NAME(tmp_import_name_from_111, mod_consts[270]);
        }

        Py_DECREF(tmp_import_name_from_111);
        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_import_name_from_112;
        PyObject *tmp_name_name_82;
        PyObject *tmp_globals_arg_name_82;
        PyObject *tmp_locals_arg_name_82;
        PyObject *tmp_fromlist_name_82;
        PyObject *tmp_level_name_82;
        tmp_name_name_82 = mod_consts[268];
        tmp_globals_arg_name_82 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_82 = Py_None;
        tmp_fromlist_name_82 = mod_consts[271];
        tmp_level_name_82 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 88;
        tmp_import_name_from_112 = IMPORT_MODULE5(tmp_name_name_82, tmp_globals_arg_name_82, tmp_locals_arg_name_82, tmp_fromlist_name_82, tmp_level_name_82);
        if (tmp_import_name_from_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_112)) {
            tmp_assign_source_137 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_112,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[272],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_137 = IMPORT_NAME(tmp_import_name_from_112, mod_consts[272]);
        }

        Py_DECREF(tmp_import_name_from_112);
        if (tmp_assign_source_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_name_name_83;
        PyObject *tmp_globals_arg_name_83;
        PyObject *tmp_locals_arg_name_83;
        PyObject *tmp_fromlist_name_83;
        PyObject *tmp_level_name_83;
        tmp_name_name_83 = mod_consts[273];
        tmp_globals_arg_name_83 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_83 = Py_None;
        tmp_fromlist_name_83 = mod_consts[274];
        tmp_level_name_83 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 89;
        tmp_assign_source_138 = IMPORT_MODULE5(tmp_name_name_83, tmp_globals_arg_name_83, tmp_locals_arg_name_83, tmp_fromlist_name_83, tmp_level_name_83);
        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_23__module == NULL);
        tmp_import_from_23__module = tmp_assign_source_138;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_import_name_from_113;
        CHECK_OBJECT(tmp_import_from_23__module);
        tmp_import_name_from_113 = tmp_import_from_23__module;
        if (PyModule_Check(tmp_import_name_from_113)) {
            tmp_assign_source_139 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_113,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[275],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_139 = IMPORT_NAME(tmp_import_name_from_113, mod_consts[275]);
        }

        if (tmp_assign_source_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_import_name_from_114;
        CHECK_OBJECT(tmp_import_from_23__module);
        tmp_import_name_from_114 = tmp_import_from_23__module;
        if (PyModule_Check(tmp_import_name_from_114)) {
            tmp_assign_source_140 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_114,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[276],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_140 = IMPORT_NAME(tmp_import_name_from_114, mod_consts[276]);
        }

        if (tmp_assign_source_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_140);
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_23__module);
    Py_DECREF(tmp_import_from_23__module);
    tmp_import_from_23__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    CHECK_OBJECT(tmp_import_from_23__module);
    Py_DECREF(tmp_import_from_23__module);
    tmp_import_from_23__module = NULL;
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_import_name_from_115;
        PyObject *tmp_name_name_84;
        PyObject *tmp_globals_arg_name_84;
        PyObject *tmp_locals_arg_name_84;
        PyObject *tmp_fromlist_name_84;
        PyObject *tmp_level_name_84;
        tmp_name_name_84 = mod_consts[277];
        tmp_globals_arg_name_84 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_84 = Py_None;
        tmp_fromlist_name_84 = mod_consts[278];
        tmp_level_name_84 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 90;
        tmp_import_name_from_115 = IMPORT_MODULE5(tmp_name_name_84, tmp_globals_arg_name_84, tmp_locals_arg_name_84, tmp_fromlist_name_84, tmp_level_name_84);
        if (tmp_import_name_from_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_115)) {
            tmp_assign_source_141 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_115,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[279],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_141 = IMPORT_NAME(tmp_import_name_from_115, mod_consts[279]);
        }

        Py_DECREF(tmp_import_name_from_115);
        if (tmp_assign_source_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_import_name_from_116;
        PyObject *tmp_name_name_85;
        PyObject *tmp_globals_arg_name_85;
        PyObject *tmp_locals_arg_name_85;
        PyObject *tmp_fromlist_name_85;
        PyObject *tmp_level_name_85;
        tmp_name_name_85 = mod_consts[277];
        tmp_globals_arg_name_85 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_85 = Py_None;
        tmp_fromlist_name_85 = mod_consts[280];
        tmp_level_name_85 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 91;
        tmp_import_name_from_116 = IMPORT_MODULE5(tmp_name_name_85, tmp_globals_arg_name_85, tmp_locals_arg_name_85, tmp_fromlist_name_85, tmp_level_name_85);
        if (tmp_import_name_from_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_116)) {
            tmp_assign_source_142 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_116,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[281],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_142 = IMPORT_NAME(tmp_import_name_from_116, mod_consts[281]);
        }

        Py_DECREF(tmp_import_name_from_116);
        if (tmp_assign_source_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_import_name_from_117;
        PyObject *tmp_name_name_86;
        PyObject *tmp_globals_arg_name_86;
        PyObject *tmp_locals_arg_name_86;
        PyObject *tmp_fromlist_name_86;
        PyObject *tmp_level_name_86;
        tmp_name_name_86 = mod_consts[277];
        tmp_globals_arg_name_86 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_86 = Py_None;
        tmp_fromlist_name_86 = mod_consts[282];
        tmp_level_name_86 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 92;
        tmp_import_name_from_117 = IMPORT_MODULE5(tmp_name_name_86, tmp_globals_arg_name_86, tmp_locals_arg_name_86, tmp_fromlist_name_86, tmp_level_name_86);
        if (tmp_import_name_from_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_117)) {
            tmp_assign_source_143 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_117,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[283],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_143 = IMPORT_NAME(tmp_import_name_from_117, mod_consts[283]);
        }

        Py_DECREF(tmp_import_name_from_117);
        if (tmp_assign_source_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_import_name_from_118;
        PyObject *tmp_name_name_87;
        PyObject *tmp_globals_arg_name_87;
        PyObject *tmp_locals_arg_name_87;
        PyObject *tmp_fromlist_name_87;
        PyObject *tmp_level_name_87;
        tmp_name_name_87 = mod_consts[284];
        tmp_globals_arg_name_87 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_87 = Py_None;
        tmp_fromlist_name_87 = mod_consts[285];
        tmp_level_name_87 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 93;
        tmp_import_name_from_118 = IMPORT_MODULE5(tmp_name_name_87, tmp_globals_arg_name_87, tmp_locals_arg_name_87, tmp_fromlist_name_87, tmp_level_name_87);
        if (tmp_import_name_from_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_118)) {
            tmp_assign_source_144 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_118,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[286],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_144 = IMPORT_NAME(tmp_import_name_from_118, mod_consts[286]);
        }

        Py_DECREF(tmp_import_name_from_118);
        if (tmp_assign_source_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_import_name_from_119;
        PyObject *tmp_name_name_88;
        PyObject *tmp_globals_arg_name_88;
        PyObject *tmp_locals_arg_name_88;
        PyObject *tmp_fromlist_name_88;
        PyObject *tmp_level_name_88;
        tmp_name_name_88 = mod_consts[287];
        tmp_globals_arg_name_88 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_88 = Py_None;
        tmp_fromlist_name_88 = mod_consts[288];
        tmp_level_name_88 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 94;
        tmp_import_name_from_119 = IMPORT_MODULE5(tmp_name_name_88, tmp_globals_arg_name_88, tmp_locals_arg_name_88, tmp_fromlist_name_88, tmp_level_name_88);
        if (tmp_import_name_from_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_119)) {
            tmp_assign_source_145 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_119,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[289],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_145 = IMPORT_NAME(tmp_import_name_from_119, mod_consts[289]);
        }

        Py_DECREF(tmp_import_name_from_119);
        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_import_name_from_120;
        PyObject *tmp_name_name_89;
        PyObject *tmp_globals_arg_name_89;
        PyObject *tmp_locals_arg_name_89;
        PyObject *tmp_fromlist_name_89;
        PyObject *tmp_level_name_89;
        tmp_name_name_89 = mod_consts[290];
        tmp_globals_arg_name_89 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_89 = Py_None;
        tmp_fromlist_name_89 = mod_consts[291];
        tmp_level_name_89 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 95;
        tmp_import_name_from_120 = IMPORT_MODULE5(tmp_name_name_89, tmp_globals_arg_name_89, tmp_locals_arg_name_89, tmp_fromlist_name_89, tmp_level_name_89);
        if (tmp_import_name_from_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_120)) {
            tmp_assign_source_146 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_120,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[292],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_146 = IMPORT_NAME(tmp_import_name_from_120, mod_consts[292]);
        }

        Py_DECREF(tmp_import_name_from_120);
        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_import_name_from_121;
        PyObject *tmp_name_name_90;
        PyObject *tmp_globals_arg_name_90;
        PyObject *tmp_locals_arg_name_90;
        PyObject *tmp_fromlist_name_90;
        PyObject *tmp_level_name_90;
        tmp_name_name_90 = mod_consts[290];
        tmp_globals_arg_name_90 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_90 = Py_None;
        tmp_fromlist_name_90 = mod_consts[293];
        tmp_level_name_90 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 96;
        tmp_import_name_from_121 = IMPORT_MODULE5(tmp_name_name_90, tmp_globals_arg_name_90, tmp_locals_arg_name_90, tmp_fromlist_name_90, tmp_level_name_90);
        if (tmp_import_name_from_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_121)) {
            tmp_assign_source_147 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_121,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[294],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_147 = IMPORT_NAME(tmp_import_name_from_121, mod_consts[294]);
        }

        Py_DECREF(tmp_import_name_from_121);
        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_import_name_from_122;
        PyObject *tmp_name_name_91;
        PyObject *tmp_globals_arg_name_91;
        PyObject *tmp_locals_arg_name_91;
        PyObject *tmp_fromlist_name_91;
        PyObject *tmp_level_name_91;
        tmp_name_name_91 = mod_consts[295];
        tmp_globals_arg_name_91 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_91 = Py_None;
        tmp_fromlist_name_91 = mod_consts[296];
        tmp_level_name_91 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 97;
        tmp_import_name_from_122 = IMPORT_MODULE5(tmp_name_name_91, tmp_globals_arg_name_91, tmp_locals_arg_name_91, tmp_fromlist_name_91, tmp_level_name_91);
        if (tmp_import_name_from_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_122)) {
            tmp_assign_source_148 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_122,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[297],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_148 = IMPORT_NAME(tmp_import_name_from_122, mod_consts[297]);
        }

        Py_DECREF(tmp_import_name_from_122);
        if (tmp_assign_source_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_import_name_from_123;
        PyObject *tmp_name_name_92;
        PyObject *tmp_globals_arg_name_92;
        PyObject *tmp_locals_arg_name_92;
        PyObject *tmp_fromlist_name_92;
        PyObject *tmp_level_name_92;
        tmp_name_name_92 = mod_consts[295];
        tmp_globals_arg_name_92 = (PyObject *)moduledict_netmiko$ssh_dispatcher;
        tmp_locals_arg_name_92 = Py_None;
        tmp_fromlist_name_92 = mod_consts[298];
        tmp_level_name_92 = mod_consts[15];
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 98;
        tmp_import_name_from_123 = IMPORT_MODULE5(tmp_name_name_92, tmp_globals_arg_name_92, tmp_locals_arg_name_92, tmp_fromlist_name_92, tmp_level_name_92);
        if (tmp_import_name_from_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_123)) {
            tmp_assign_source_149 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_123,
                (PyObject *)moduledict_netmiko$ssh_dispatcher,
                mod_consts[299],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_149 = IMPORT_NAME(tmp_import_name_from_123, mod_consts[299]);
        }

        Py_DECREF(tmp_import_name_from_123);
        if (tmp_assign_source_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[270]);

        if (unlikely(tmp_assign_source_150 == NULL)) {
            tmp_assign_source_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[270]);
        }

        if (tmp_assign_source_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[272]);

        if (unlikely(tmp_assign_source_151 == NULL)) {
            tmp_assign_source_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[272]);
        }

        if (tmp_assign_source_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[302];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_152 = _PyDict_NewPresized( 106 );
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[303];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[304];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[305];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[306];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[307];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[308];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[309];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[310];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[311];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[312];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[313];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[314];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[315];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[255]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[255]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[316];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[317];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[318];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[319];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[286]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[286]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[320];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[321];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[322];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[323];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[324];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[325];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[326];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[327];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[328];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[329];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[330];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[331];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[332];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[333];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[334];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[335];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[336];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[337];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[338];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[339];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[340];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[341];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[342];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[343];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[344];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[345];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[346];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[347];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[348];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[349];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[350];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[351];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[352];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[353];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[354];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[355];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[356];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[357];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[358];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[359];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[360];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[361];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[362];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[300]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[300]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[363];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[270]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[270]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[364];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[365];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[366];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[178]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[367];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[368];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[369];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[370];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[371];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[189]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[189]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[372];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[189]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[189]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[373];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[374];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[375];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[376];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[200]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[377];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[378];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[379];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[380];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[381];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[382];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[214]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[383];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[217]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[217]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[384];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[385];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[386];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[387];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[228]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[228]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[388];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[231]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[389];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[234]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[234]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[390];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[239]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[239]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[391];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[242]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[392];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[245]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[393];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[250]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[250]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[394];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[255]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[255]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[395];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[260]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[260]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[396];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[264]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[264]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[397];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[267]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[267]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[398];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[275]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[275]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[399];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[281]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[281]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[400];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[279]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[279]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[401];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[281]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[281]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[402];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[283]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[283]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[403];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[286]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[286]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[404];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[286]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[286]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[405];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[289]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[289]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[406];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[297]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[407];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[292]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[292]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_152, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_152);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[408], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[308];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_153 = _PyDict_NewPresized( 11 );
        tmp_res = PyDict_SetItem(tmp_assign_source_153, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[323];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_153, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[324];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_153, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[326];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_153, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[327];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_153, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[331];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_153, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[332];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_153, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[339];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_153, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[372];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_153, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[376];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_153, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[386];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[221]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[221]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_153, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_153);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[409], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[408]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[408]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 229;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[410]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_155 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_155;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_156;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_156 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_156 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 229;
                goto try_except_handler_24;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_156;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_157 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto try_except_handler_25;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_157;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_158 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_158 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 229;
            goto try_except_handler_26;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_158;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_159 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_159 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 229;
            goto try_except_handler_26;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_159;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 229;
                    goto try_except_handler_26;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[411];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 229;
            goto try_except_handler_26;
        }
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_25;
    // End of try:
    try_end_24:;
    goto try_end_25;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto try_except_handler_24;
    // End of try:
    try_end_25:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_160;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_160 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[412], tmp_assign_source_160);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_161;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_161 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[413], tmp_assign_source_161);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[413]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[413]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_24;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[409]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[409]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_24;
        }
        tmp_ass_subscript_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[412]);

        if (unlikely(tmp_ass_subscript_1 == NULL)) {
            tmp_ass_subscript_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[412]);
        }

        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_24;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_24;
        }
    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[412]);

        if (unlikely(tmp_left_name_1 == NULL)) {
            tmp_left_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[412]);
        }

        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_24;
        }
        tmp_right_name_1 = mod_consts[414];
        tmp_assign_source_162 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[415], tmp_assign_source_162);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[413]);

        if (unlikely(tmp_ass_subvalue_2 == NULL)) {
            tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[413]);
        }

        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto try_except_handler_24;
        }
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[409]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[409]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto try_except_handler_24;
        }
        tmp_ass_subscript_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[415]);

        if (unlikely(tmp_ass_subscript_2 == NULL)) {
            tmp_ass_subscript_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[415]);
        }

        assert(!(tmp_ass_subscript_2 == NULL));
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto try_except_handler_24;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 229;

        goto try_except_handler_24;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_26;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[409]);

        if (unlikely(tmp_assign_source_163 == NULL)) {
            tmp_assign_source_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[409]);
        }

        if (tmp_assign_source_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[409], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 236;
        tmp_iter_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[410]);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_165 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_165;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_166;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_166 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_166 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 236;
                goto try_except_handler_27;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_166;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
        tmp_assign_source_167 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_28;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_167;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_168 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_168 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 236;
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_168;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_169 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_169 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 236;
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_169;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 236;
                    goto try_except_handler_29;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[411];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 236;
            goto try_except_handler_29;
        }
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto try_except_handler_28;
    // End of try:
    try_end_27:;
    goto try_end_28;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto try_except_handler_27;
    // End of try:
    try_end_28:;
    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_170;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_170 = tmp_tuple_unpack_2__element_1;
        UPDATE_STRING_DICT0(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[412], tmp_assign_source_170);
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_171;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_171 = tmp_tuple_unpack_2__element_2;
        UPDATE_STRING_DICT0(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[413], tmp_assign_source_171);
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[413]);

        if (unlikely(tmp_ass_subvalue_3 == NULL)) {
            tmp_ass_subvalue_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[413]);
        }

        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto try_except_handler_27;
        }
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[409]);

        if (unlikely(tmp_ass_subscribed_3 == NULL)) {
            tmp_ass_subscribed_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[409]);
        }

        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto try_except_handler_27;
        }
        tmp_ass_subscript_3 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[412]);

        if (unlikely(tmp_ass_subscript_3 == NULL)) {
            tmp_ass_subscript_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[412]);
        }

        if (tmp_ass_subscript_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto try_except_handler_27;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto try_except_handler_27;
        }
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[412]);

        if (unlikely(tmp_left_name_2 == NULL)) {
            tmp_left_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[412]);
        }

        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_27;
        }
        tmp_right_name_2 = mod_consts[414];
        tmp_assign_source_172 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_2);
        if (tmp_assign_source_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_27;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[415], tmp_assign_source_172);
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_ass_subvalue_4 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[413]);

        if (unlikely(tmp_ass_subvalue_4 == NULL)) {
            tmp_ass_subvalue_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[413]);
        }

        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_27;
        }
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[409]);

        if (unlikely(tmp_ass_subscribed_4 == NULL)) {
            tmp_ass_subscribed_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[409]);
        }

        if (tmp_ass_subscribed_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_27;
        }
        tmp_ass_subscript_4 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[415]);

        if (unlikely(tmp_ass_subscript_4 == NULL)) {
            tmp_ass_subscript_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[415]);
        }

        assert(!(tmp_ass_subscript_4 == NULL));
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_27;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 236;

        goto try_except_handler_27;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_29;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[409]);

        if (unlikely(tmp_assign_source_173 == NULL)) {
            tmp_assign_source_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[409]);
        }

        if (tmp_assign_source_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_173);
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        tmp_ass_subvalue_5 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_ass_subvalue_5 == NULL)) {
            tmp_ass_subvalue_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_ass_subvalue_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_5 == NULL)) {
            tmp_ass_subscribed_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = mod_consts[416];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        tmp_ass_subvalue_6 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_ass_subvalue_6 == NULL)) {
            tmp_ass_subvalue_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_ass_subvalue_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_6 == NULL)) {
            tmp_ass_subscribed_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_6 = mod_consts[417];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        tmp_ass_subvalue_7 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_ass_subvalue_7 == NULL)) {
            tmp_ass_subvalue_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_ass_subvalue_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_7 == NULL)) {
            tmp_ass_subscribed_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_7 = mod_consts[418];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        tmp_ass_subvalue_8 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_ass_subvalue_8 == NULL)) {
            tmp_ass_subvalue_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
        }

        if (tmp_ass_subvalue_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_8 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_8 == NULL)) {
            tmp_ass_subscribed_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_8 = mod_consts[419];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        tmp_ass_subvalue_9 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[257]);

        if (unlikely(tmp_ass_subvalue_9 == NULL)) {
            tmp_ass_subvalue_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[257]);
        }

        if (tmp_ass_subvalue_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_9 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_9 == NULL)) {
            tmp_ass_subscribed_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_9 = mod_consts[420];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_ass_subscript_10;
        tmp_ass_subvalue_10 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_ass_subvalue_10 == NULL)) {
            tmp_ass_subvalue_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_ass_subvalue_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_10 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_10 == NULL)) {
            tmp_ass_subscribed_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_10 = mod_consts[421];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_11;
        PyObject *tmp_ass_subscribed_11;
        PyObject *tmp_ass_subscript_11;
        tmp_ass_subvalue_11 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_ass_subvalue_11 == NULL)) {
            tmp_ass_subvalue_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_ass_subvalue_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_11 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_11 == NULL)) {
            tmp_ass_subscribed_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_11 = mod_consts[422];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_12;
        PyObject *tmp_ass_subscribed_12;
        PyObject *tmp_ass_subscript_12;
        tmp_ass_subvalue_12 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_ass_subvalue_12 == NULL)) {
            tmp_ass_subvalue_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_ass_subvalue_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_12 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_12 == NULL)) {
            tmp_ass_subscribed_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_12 = mod_consts[423];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_13;
        PyObject *tmp_ass_subscribed_13;
        PyObject *tmp_ass_subscript_13;
        tmp_ass_subvalue_13 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_ass_subvalue_13 == NULL)) {
            tmp_ass_subvalue_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_ass_subvalue_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_13 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_13 == NULL)) {
            tmp_ass_subscribed_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_13 = mod_consts[424];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_14;
        PyObject *tmp_ass_subscribed_14;
        PyObject *tmp_ass_subscript_14;
        tmp_ass_subvalue_14 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_ass_subvalue_14 == NULL)) {
            tmp_ass_subvalue_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_ass_subvalue_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_14 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_14 == NULL)) {
            tmp_ass_subscribed_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_14 = mod_consts[425];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_15;
        PyObject *tmp_ass_subscribed_15;
        PyObject *tmp_ass_subscript_15;
        tmp_ass_subvalue_15 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_ass_subvalue_15 == NULL)) {
            tmp_ass_subvalue_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_ass_subvalue_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_15 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_15 == NULL)) {
            tmp_ass_subscribed_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_15 = mod_consts[426];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_16;
        PyObject *tmp_ass_subscribed_16;
        PyObject *tmp_ass_subscript_16;
        tmp_ass_subvalue_16 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_ass_subvalue_16 == NULL)) {
            tmp_ass_subvalue_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_ass_subvalue_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_16 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_16 == NULL)) {
            tmp_ass_subscribed_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_16 = mod_consts[427];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_17;
        PyObject *tmp_ass_subscribed_17;
        PyObject *tmp_ass_subscript_17;
        tmp_ass_subvalue_17 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_ass_subvalue_17 == NULL)) {
            tmp_ass_subvalue_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_ass_subvalue_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_17 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_17 == NULL)) {
            tmp_ass_subscribed_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_17 = mod_consts[428];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_18;
        PyObject *tmp_ass_subscribed_18;
        PyObject *tmp_ass_subscript_18;
        tmp_ass_subvalue_18 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_ass_subvalue_18 == NULL)) {
            tmp_ass_subvalue_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_ass_subvalue_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_18 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_18 == NULL)) {
            tmp_ass_subscribed_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_18 = mod_consts[429];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_19;
        PyObject *tmp_ass_subscribed_19;
        PyObject *tmp_ass_subscript_19;
        tmp_ass_subvalue_19 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_ass_subvalue_19 == NULL)) {
            tmp_ass_subvalue_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_ass_subvalue_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_19 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_19 == NULL)) {
            tmp_ass_subscribed_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_19 = mod_consts[430];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_20;
        PyObject *tmp_ass_subscribed_20;
        PyObject *tmp_ass_subscript_20;
        tmp_ass_subvalue_20 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_ass_subvalue_20 == NULL)) {
            tmp_ass_subvalue_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_ass_subvalue_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_20 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_20 == NULL)) {
            tmp_ass_subscribed_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_20 = mod_consts[431];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_21;
        PyObject *tmp_ass_subscribed_21;
        PyObject *tmp_ass_subscript_21;
        tmp_ass_subvalue_21 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_ass_subvalue_21 == NULL)) {
            tmp_ass_subvalue_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_ass_subvalue_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_21 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_21 == NULL)) {
            tmp_ass_subscribed_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_21 = mod_consts[432];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_22;
        PyObject *tmp_ass_subscribed_22;
        PyObject *tmp_ass_subscript_22;
        tmp_ass_subvalue_22 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[301]);

        if (unlikely(tmp_ass_subvalue_22 == NULL)) {
            tmp_ass_subvalue_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[301]);
        }

        if (tmp_ass_subvalue_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_22 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_22 == NULL)) {
            tmp_ass_subscribed_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_22 = mod_consts[433];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_23;
        PyObject *tmp_ass_subscribed_23;
        PyObject *tmp_ass_subscript_23;
        tmp_ass_subvalue_23 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[272]);

        if (unlikely(tmp_ass_subvalue_23 == NULL)) {
            tmp_ass_subvalue_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[272]);
        }

        if (tmp_ass_subvalue_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_23 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_23 == NULL)) {
            tmp_ass_subscribed_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_23 = mod_consts[434];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_24;
        PyObject *tmp_ass_subscribed_24;
        PyObject *tmp_ass_subscript_24;
        tmp_ass_subvalue_24 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_ass_subvalue_24 == NULL)) {
            tmp_ass_subvalue_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
        }

        if (tmp_ass_subvalue_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_24 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_24 == NULL)) {
            tmp_ass_subscribed_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_24 = mod_consts[435];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_25;
        PyObject *tmp_ass_subscribed_25;
        PyObject *tmp_ass_subscript_25;
        tmp_ass_subvalue_25 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_ass_subvalue_25 == NULL)) {
            tmp_ass_subvalue_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[175]);
        }

        if (tmp_ass_subvalue_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_25 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_25 == NULL)) {
            tmp_ass_subscribed_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_25 = mod_consts[436];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_26;
        PyObject *tmp_ass_subscribed_26;
        PyObject *tmp_ass_subscript_26;
        tmp_ass_subvalue_26 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_ass_subvalue_26 == NULL)) {
            tmp_ass_subvalue_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_ass_subvalue_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_26 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_26 == NULL)) {
            tmp_ass_subscribed_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_26 = mod_consts[437];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_27;
        PyObject *tmp_ass_subscribed_27;
        PyObject *tmp_ass_subscript_27;
        tmp_ass_subvalue_27 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_ass_subvalue_27 == NULL)) {
            tmp_ass_subvalue_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
        }

        if (tmp_ass_subvalue_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_27 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_27 == NULL)) {
            tmp_ass_subscribed_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_27 = mod_consts[438];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_28;
        PyObject *tmp_ass_subscribed_28;
        PyObject *tmp_ass_subscript_28;
        tmp_ass_subvalue_28 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_ass_subvalue_28 == NULL)) {
            tmp_ass_subvalue_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_ass_subvalue_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_28 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_28 == NULL)) {
            tmp_ass_subscribed_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_28 = mod_consts[439];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_29;
        PyObject *tmp_ass_subscribed_29;
        PyObject *tmp_ass_subscript_29;
        tmp_ass_subvalue_29 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_ass_subvalue_29 == NULL)) {
            tmp_ass_subvalue_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_ass_subvalue_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_29 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_29 == NULL)) {
            tmp_ass_subscribed_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_29 = mod_consts[440];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_30;
        PyObject *tmp_ass_subscribed_30;
        PyObject *tmp_ass_subscript_30;
        tmp_ass_subvalue_30 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[236]);

        if (unlikely(tmp_ass_subvalue_30 == NULL)) {
            tmp_ass_subvalue_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[236]);
        }

        if (tmp_ass_subvalue_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_30 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_30 == NULL)) {
            tmp_ass_subscribed_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_30 = mod_consts[441];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_31;
        PyObject *tmp_ass_subscribed_31;
        PyObject *tmp_ass_subscript_31;
        tmp_ass_subvalue_31 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[227]);

        if (unlikely(tmp_ass_subvalue_31 == NULL)) {
            tmp_ass_subvalue_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[227]);
        }

        if (tmp_ass_subvalue_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_31 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_31 == NULL)) {
            tmp_ass_subscribed_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_31 = mod_consts[442];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_32;
        PyObject *tmp_ass_subscribed_32;
        PyObject *tmp_ass_subscript_32;
        tmp_ass_subvalue_32 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_ass_subvalue_32 == NULL)) {
            tmp_ass_subvalue_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[247]);
        }

        if (tmp_ass_subvalue_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_32 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_32 == NULL)) {
            tmp_ass_subscribed_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_32 = mod_consts[443];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_33;
        PyObject *tmp_ass_subscribed_33;
        PyObject *tmp_ass_subscript_33;
        tmp_ass_subvalue_33 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[252]);

        if (unlikely(tmp_ass_subvalue_33 == NULL)) {
            tmp_ass_subvalue_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[252]);
        }

        if (tmp_ass_subvalue_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_33 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_33 == NULL)) {
            tmp_ass_subscribed_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_33 = mod_consts[444];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_34;
        PyObject *tmp_ass_subscribed_34;
        PyObject *tmp_ass_subscript_34;
        tmp_ass_subvalue_34 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[257]);

        if (unlikely(tmp_ass_subvalue_34 == NULL)) {
            tmp_ass_subvalue_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[257]);
        }

        if (tmp_ass_subvalue_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_34 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_34 == NULL)) {
            tmp_ass_subscribed_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_34 = mod_consts[445];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_35;
        PyObject *tmp_ass_subscribed_35;
        PyObject *tmp_ass_subscript_35;
        tmp_ass_subvalue_35 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[261]);

        if (unlikely(tmp_ass_subvalue_35 == NULL)) {
            tmp_ass_subvalue_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[261]);
        }

        if (tmp_ass_subvalue_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_35 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_35 == NULL)) {
            tmp_ass_subscribed_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_35 = mod_consts[446];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_36;
        PyObject *tmp_ass_subscribed_36;
        PyObject *tmp_ass_subscript_36;
        tmp_ass_subvalue_36 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[276]);

        if (unlikely(tmp_ass_subvalue_36 == NULL)) {
            tmp_ass_subvalue_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[276]);
        }

        if (tmp_ass_subvalue_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_36 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_36 == NULL)) {
            tmp_ass_subscribed_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_36 = mod_consts[447];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_37;
        PyObject *tmp_ass_subscribed_37;
        PyObject *tmp_ass_subscript_37;
        tmp_ass_subvalue_37 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[294]);

        if (unlikely(tmp_ass_subvalue_37 == NULL)) {
            tmp_ass_subvalue_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[294]);
        }

        if (tmp_ass_subvalue_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_37 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_37 == NULL)) {
            tmp_ass_subscribed_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_37 = mod_consts[448];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_38;
        PyObject *tmp_ass_subscribed_38;
        PyObject *tmp_ass_subscript_38;
        tmp_ass_subvalue_38 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_ass_subvalue_38 == NULL)) {
            tmp_ass_subvalue_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[299]);
        }

        if (tmp_ass_subvalue_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_38 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_38 == NULL)) {
            tmp_ass_subscribed_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_38 = mod_consts[449];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_39;
        PyObject *tmp_ass_subscribed_39;
        PyObject *tmp_ass_subscript_39;
        tmp_ass_subvalue_39 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_ass_subvalue_39 == NULL)) {
            tmp_ass_subvalue_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_ass_subvalue_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_39 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_39 == NULL)) {
            tmp_ass_subscribed_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_39 = mod_consts[450];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_40;
        PyObject *tmp_ass_subscribed_40;
        PyObject *tmp_ass_subscript_40;
        tmp_ass_subvalue_40 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[270]);

        if (unlikely(tmp_ass_subvalue_40 == NULL)) {
            tmp_ass_subvalue_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[270]);
        }

        if (tmp_ass_subvalue_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_40 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_40 == NULL)) {
            tmp_ass_subscribed_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_40 = mod_consts[451];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_41;
        PyObject *tmp_ass_subscribed_41;
        PyObject *tmp_ass_subscript_41;
        tmp_ass_subvalue_41 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[270]);

        if (unlikely(tmp_ass_subvalue_41 == NULL)) {
            tmp_ass_subvalue_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[270]);
        }

        if (tmp_ass_subvalue_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_41 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_41 == NULL)) {
            tmp_ass_subscribed_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_ass_subscribed_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_41 = mod_consts[452];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 285;
        tmp_list_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[453]);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_174 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_174);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_1;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        assert(!(tmp_called_instance_4 == NULL));
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 286;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[454]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_list_arg_2;
        PyObject *tmp_called_instance_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[408]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[408]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 287;
        tmp_list_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[453]);
        if (tmp_list_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_175 = MAKE_LIST(tmp_list_arg_2);
        Py_DECREF(tmp_list_arg_2);
        if (tmp_assign_source_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[455], tmp_assign_source_175);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_2;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[455]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[455]);
        }

        assert(!(tmp_called_instance_6 == NULL));
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 288;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[454]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_expression_name_1 = mod_consts[456];
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[457]);
        assert(!(tmp_called_name_1 == NULL));
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[455]);

        if (unlikely(tmp_args_element_name_1 == NULL)) {
            tmp_args_element_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[455]);
        }

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 289;
        tmp_assign_source_176 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_left_name_3 = mod_consts[456];
        tmp_right_name_3 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_right_name_3 == NULL)) {
            tmp_right_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_right_name_3 == NULL));
        tmp_assign_source_177 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_assign_source_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_list_arg_3;
        PyObject *tmp_called_instance_7;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 292;
        tmp_list_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[453]);
        if (tmp_list_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_178 = MAKE_LIST(tmp_list_arg_3);
        Py_DECREF(tmp_list_arg_3);
        if (tmp_assign_source_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_178);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_3;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_called_instance_8 == NULL));
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 293;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[454]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_expression_name_2 = mod_consts[456];
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[457]);
        assert(!(tmp_called_name_2 == NULL));
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_args_element_name_2 == NULL)) {
            tmp_args_element_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 294;
        tmp_assign_source_179 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        if (tmp_assign_source_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        tmp_left_name_4 = mod_consts[456];
        tmp_right_name_4 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_right_name_4 == NULL)) {
            tmp_right_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        assert(!(tmp_right_name_4 == NULL));
        tmp_assign_source_180 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_4, tmp_right_name_4);
        if (tmp_assign_source_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        // Tried code:
        {
            PyObject *tmp_assign_source_182;
            PyObject *tmp_iter_arg_5;
            tmp_iter_arg_5 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_iter_arg_5 == NULL)) {
                tmp_iter_arg_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_iter_arg_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto try_except_handler_30;
            }
            tmp_assign_source_182 = MAKE_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_182 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto try_except_handler_30;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_182;
        }
        {
            PyObject *tmp_assign_source_183;
            tmp_assign_source_183 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_183;
        }
        if (isFrameUnusable(cache_frame_abc8aa2d12c36dc12766a215eba0c9c1_2)) {
            Py_XDECREF(cache_frame_abc8aa2d12c36dc12766a215eba0c9c1_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_abc8aa2d12c36dc12766a215eba0c9c1_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_abc8aa2d12c36dc12766a215eba0c9c1_2 = MAKE_FUNCTION_FRAME(codeobj_abc8aa2d12c36dc12766a215eba0c9c1, module_netmiko$ssh_dispatcher, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_abc8aa2d12c36dc12766a215eba0c9c1_2->m_type_description == NULL);
        frame_abc8aa2d12c36dc12766a215eba0c9c1_2 = cache_frame_abc8aa2d12c36dc12766a215eba0c9c1_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_abc8aa2d12c36dc12766a215eba0c9c1_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_abc8aa2d12c36dc12766a215eba0c9c1_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_184;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_3 = tmp_listcomp_1__$0;
            tmp_assign_source_184 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_184 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 297;
                    goto try_except_handler_31;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_184;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_185;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_185 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_185;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = mod_consts[3];
            CHECK_OBJECT(outline_0_var_x);
            tmp_compexpr_right_1 = outline_0_var_x;
            tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "o";
                goto try_except_handler_31;
            }
            tmp_condition_result_1 = (tmp_res == 1) ? true : false;
            if (tmp_condition_result_1 != false) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_x);
            tmp_append_value_1 = outline_0_var_x;
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "o";
                goto try_except_handler_31;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_2 = "o";
            goto try_except_handler_31;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_181 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_181);
        goto try_return_handler_31;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        Py_XDECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_abc8aa2d12c36dc12766a215eba0c9c1_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_abc8aa2d12c36dc12766a215eba0c9c1_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_30;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_abc8aa2d12c36dc12766a215eba0c9c1_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_abc8aa2d12c36dc12766a215eba0c9c1_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_abc8aa2d12c36dc12766a215eba0c9c1_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_abc8aa2d12c36dc12766a215eba0c9c1_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_abc8aa2d12c36dc12766a215eba0c9c1_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame if used for exception.
        if (frame_abc8aa2d12c36dc12766a215eba0c9c1_2 == cache_frame_abc8aa2d12c36dc12766a215eba0c9c1_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_abc8aa2d12c36dc12766a215eba0c9c1_2);
            cache_frame_abc8aa2d12c36dc12766a215eba0c9c1_2 = NULL;
        }

        assertFrameObject(frame_abc8aa2d12c36dc12766a215eba0c9c1_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_30;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 297;
        goto frame_exception_exit_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[458], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_name_3;
        tmp_called_instance_9 = mod_consts[456];
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[458]);

        if (unlikely(tmp_args_element_name_3 == NULL)) {
            tmp_args_element_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[458]);
        }

        assert(!(tmp_args_element_name_3 == NULL));
        frame_65aaed4344ec50b91616466a0e947e69->m_frame.f_lineno = 298;
        tmp_assign_source_186 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[457], tmp_args_element_name_3);
        if (tmp_assign_source_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        tmp_left_name_5 = mod_consts[456];
        tmp_right_name_5 = GET_STRING_DICT_VALUE(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_right_name_5 == NULL)) {
            tmp_right_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        assert(!(tmp_right_name_5 == NULL));
        tmp_assign_source_187 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_5, tmp_right_name_5);
        if (tmp_assign_source_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_187);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_65aaed4344ec50b91616466a0e947e69);
#endif
    popFrameStack();

    assertFrameObject(frame_65aaed4344ec50b91616466a0e947e69);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_65aaed4344ec50b91616466a0e947e69);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_65aaed4344ec50b91616466a0e947e69, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_65aaed4344ec50b91616466a0e947e69->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_65aaed4344ec50b91616466a0e947e69, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_188;


        tmp_assign_source_188 = MAKE_FUNCTION_netmiko$ssh_dispatcher$$$function__1_ConnectHandler();

        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[459], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;


        tmp_assign_source_189 = MAKE_FUNCTION_netmiko$ssh_dispatcher$$$function__2_ssh_dispatcher();

        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[460];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_190 = MAKE_FUNCTION_netmiko$ssh_dispatcher$$$function__3_redispatch(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[461], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;


        tmp_assign_source_191 = MAKE_FUNCTION_netmiko$ssh_dispatcher$$$function__4_FileTransfer();

        UPDATE_STRING_DICT1(moduledict_netmiko$ssh_dispatcher, (Nuitka_StringObject *)mod_consts[462], tmp_assign_source_191);
    }

    return module_netmiko$ssh_dispatcher;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

