/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00078DBC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00178dbc; name: FUN_.text__00178dbc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__00178dbc(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((*_DAT_008a1648 & 1) == 0) && // [自动静态注释] 条件判断/分支
     (iVar7 = __cxa_guard_acquire(_DAT_008a1648), puVar6 = _DAT_008a1650, puVar3 = _DAT_0089f9b8, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
     iVar7 != 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (((*_DAT_0089f9b0 & 1) == 0) && // [自动静态注释] 条件判断/分支
       (iVar7 = __cxa_guard_acquire(_DAT_0089f9b0), puVar4 = _DAT_0089f9c8, iVar7 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (((*_DAT_0089f9c0 & 1) == 0) && // [自动静态注释] 条件判断/分支
         (iVar7 = __cxa_guard_acquire(_DAT_0089f9c0), puVar5 = _DAT_0089f9d8, iVar7 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (((*_DAT_0089f9d0 & 1) == 0) && // [自动静态注释] 条件判断/分支
           (iVar7 = __cxa_guard_acquire(_DAT_0089f9d0), puVar2 = _DAT_0089f798, iVar7 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (((*_DAT_0089f790 & 1) == 0) && // [自动静态注释] 条件判断/分支
             (iVar7 = __cxa_guard_acquire(_DAT_0089f790), puVar1 = _DAT_0089f4a0, iVar7 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (((*_DAT_0089f498 & 1) == 0) && // [自动静态注释] 条件判断/分支
               (iVar7 = __cxa_guard_acquire(_DAT_0089f498), iVar7 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *puVar1 = 0;
              __cxa_guard_release(_DAT_0089f498); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
            *puVar2 = puVar1;
            __cxa_guard_release(_DAT_0089f790); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          *puVar5 = puVar2;
          __cxa_guard_release(_DAT_0089f9d0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        *puVar4 = puVar5;
        __cxa_guard_release(_DAT_0089f9c0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *puVar3 = puVar4;
      __cxa_guard_release(_DAT_0089f9b0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *puVar6 = puVar3;
    __cxa_guard_release(_DAT_008a1648); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return _DAT_008a1650; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


