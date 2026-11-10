/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004099B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005099b0; name: FUN_.text__005099b0
 */


void FUN__text__005099b0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x40) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN__text__00400fc0(9); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x50) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN__text__00400fc0(9); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x30) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN__text__00400fc0(9); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00507b30(param_1 + 0x78); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar1 = *(long **)(param_1 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = (ulong)*(uint *)(param_1 + 0x110); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(param_1 + 0x110) != 0) { // [自动静态注释] 条件判断/分支
    plVar4 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar3 = *plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__00507a78(lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__00400fc0(0xb,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
        plVar1 = *(long **)(param_1 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = (ulong)*(uint *)(param_1 + 0x110); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      plVar4 = plVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar4 != plVar1 + uVar2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x110) = 0;
    FUN__text__00400fc0(9); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


