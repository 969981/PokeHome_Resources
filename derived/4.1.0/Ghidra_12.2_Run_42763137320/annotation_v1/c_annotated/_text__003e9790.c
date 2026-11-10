/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002E9790
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e9790; name: FUN_.text__003e9790
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__003e9790(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar3 = *(long **)(*(long *)(param_1 + 0xc0) + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,param_2,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = _DAT_008a52c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    if ((*_DAT_008a52b8 & 1) == 0) { // [自动静态注释] 条件判断/分支
      iVar2 = __cxa_guard_acquire(_DAT_008a52b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar4 = _DAT_0089f8a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar2 != 0) { // [自动静态注释] 条件判断/分支
        if (((*_DAT_0089f898 & 1) == 0) && (iVar2 = __cxa_guard_acquire(_DAT_0089f898), iVar2 != 0)) // [自动静态注释] 条件判断/分支
        { // [自动静态注释] 作用域/控制流边界
          *puVar4 = 0;
          __cxa_guard_release(_DAT_0089f898); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        *puVar1 = puVar4;
        __cxa_guard_release(_DAT_008a52b8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar4 != puVar1) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        puVar4 = (undefined8 *)*puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (puVar4 != puVar1 && puVar4 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
      if (puVar4 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        plVar3 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return plVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


