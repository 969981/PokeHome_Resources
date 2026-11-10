/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0049A650
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059a650; name: FUN_.text__0059a650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__0059a650(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((*_DAT_008a0010 & 1) == 0) && // [自动静态注释] 条件判断/分支
     (iVar6 = __cxa_guard_acquire(_DAT_008a0010), puVar4 = _DAT_008a0028, puVar3 = _DAT_008a0018, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
     iVar6 != 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (((*_DAT_008a0020 & 1) == 0) && // [自动静态注释] 条件判断/分支
       (iVar6 = __cxa_guard_acquire(_DAT_008a0020), puVar5 = _DAT_008a0038, iVar6 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (((*_DAT_008a0030 & 1) == 0) && // [自动静态注释] 条件判断/分支
         (iVar6 = __cxa_guard_acquire(_DAT_008a0030), puVar2 = _DAT_0089f798, iVar6 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (((*_DAT_0089f790 & 1) == 0) && // [自动静态注释] 条件判断/分支
           (iVar6 = __cxa_guard_acquire(_DAT_0089f790), puVar1 = _DAT_0089f4a0, iVar6 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (((*_DAT_0089f498 & 1) == 0) && // [自动静态注释] 条件判断/分支
             (iVar6 = __cxa_guard_acquire(_DAT_0089f498), iVar6 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *puVar1 = 0;
            __cxa_guard_release(_DAT_0089f498); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          *puVar2 = puVar1;
          __cxa_guard_release(_DAT_0089f790); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        *puVar5 = puVar2;
        __cxa_guard_release(_DAT_008a0030); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *puVar4 = puVar5;
      __cxa_guard_release(_DAT_008a0020); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *puVar3 = puVar4;
    __cxa_guard_release(_DAT_008a0010); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return _DAT_008a0018; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


