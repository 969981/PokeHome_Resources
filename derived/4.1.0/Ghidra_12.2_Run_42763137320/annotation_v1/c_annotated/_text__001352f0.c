/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000352F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001352f0; name: FUN_.text__001352f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__001352f0(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar2 = (long *)FUN__text__003c79c0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((*_DAT_0089fa48 & 1) == 0) && // [自动静态注释] 条件判断/分支
     (iVar1 = __cxa_guard_acquire(_DAT_0089fa48), puVar3 = _DAT_0089f8a0, iVar1 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (((*_DAT_0089f898 & 1) == 0) && (iVar1 = __cxa_guard_acquire(_DAT_0089f898), iVar1 != 0)) { // [自动静态注释] 条件判断/分支
      *puVar3 = 0;
      __cxa_guard_release(_DAT_0089f898); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *_DAT_0089fa50 = puVar3;
    __cxa_guard_release(_DAT_0089fa48); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (plVar2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return (long *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar3 != _DAT_0089fa50) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      puVar3 = (undefined8 *)*puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar3 != _DAT_0089fa50 && puVar3 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
    if (puVar3 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      return (long *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return plVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


