/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A0404
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a0404; name: FUN_.text__006a0404
 */


void FUN__text__006a0404(long param_1,undefined8 param_2,undefined8 param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  uVar1 = *(ushort *)(param_4 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar1 & 1) != 0) { // [自动静态注释] 条件判断/分支
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 1;
    uVar1 = *(ushort *)(param_4 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((uVar1 >> 1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar2 = *(ushort *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = *(ushort *)(param_1 + 0x60) | 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ushort *)(param_1 + 0x60) = uVar2;
    uVar1 = *(ushort *)(param_4 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((uVar1 >> 4 & 1) != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = uVar2 | 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ushort *)(param_1 + 0x60) = uVar2;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_4 + 0x44);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_4 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_4 + 0x50);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_4 + 0x40);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_4 + 0x28);
  if ((uVar2 & 0x12) == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006a02a8(); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


