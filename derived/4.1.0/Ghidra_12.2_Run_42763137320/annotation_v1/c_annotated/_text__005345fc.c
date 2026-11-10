/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004345FC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005345fc; name: FUN_.text__005345fc
 */


void FUN__text__005345fc(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__0050c2a0(param_2,*(undefined8 *)(lVar4 + 0x68)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(lVar4 + 0x58) != -1) { // [自动静态注释] 条件判断/分支
    FUN__text__0050c2a0(param_2,*(undefined8 *)(lVar4 + 0x80)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = FUN__text__0050c2e0(param_2,**(undefined8 **)(param_1 + 0x30)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__005334f0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),uVar1, // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined8 *)(param_1 + 0x30),uVar2);
  if ((uVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
    uVar1 = *(undefined8 *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00509350(uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (((uVar3 & 1) != 0) || (uVar3 = FUN__text__00509374(uVar1), (uVar3 & 1) != 0)) // [自动静态注释] 条件判断/分支
    goto LAB__text__005346a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0x28) = 4;
  FUN__text__00529fa0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__005346a0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0052c540(*(long *)(param_1 + 0x30) + 8,0,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(lVar4 + 0x7c) = *(byte *)(lVar4 + 0x7c) | 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


