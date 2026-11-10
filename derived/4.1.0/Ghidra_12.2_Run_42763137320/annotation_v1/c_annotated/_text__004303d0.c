/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003303D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004303d0; name: FUN_.text__004303d0
 */


void FUN__text__004303d0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = *(ushort **)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((puVar1 != (ushort *)0x0) && ((ulong)*puVar1 != 0)) { // [自动静态注释] 条件判断/分支
    lVar2 = (ulong)*puVar1 << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)((long)puVar1 + ((ulong)((int)lVar2 + 9) & 0x3fff8) + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*plVar3 != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__0042f5a0(DAT_00ae9a60,*plVar3,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        *plVar3 = 0;
        (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      plVar3 = plVar3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = lVar2 + -2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar2 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x28) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x20) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x20) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


