/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00532210
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00632210; name: FUN_.text__00632210
 */


void FUN__text__00632210(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar9 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar9 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = FUN__text__00610350(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__00637870(uVar2,uVar3,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = FUN__text__0060fec8(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *(undefined1 *)(param_1 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__005feecc(uVar3,uVar4,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar5 >> 4 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar4 = FUN__text__00613900(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = FUN__text__006114d0(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar7 = FUN__text__0061ae30(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar8 = FUN__text__00615c70(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00638a80(uVar2,uVar3,uVar4,uVar6,uVar7,uVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


