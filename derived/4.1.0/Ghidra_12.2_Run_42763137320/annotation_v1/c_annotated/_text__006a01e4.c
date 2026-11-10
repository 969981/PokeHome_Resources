/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A01E4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a01e4; name: FUN_.text__006a01e4
 */


void FUN__text__006a01e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5,uint param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  if (*(char *)(param_4 + 0x22) != '\0') { // [自动静态注释] 条件判断/分支
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 1;
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)(param_4 + 0x23) != '\0') { // [自动静态注释] 条件判断/分支
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 2;
  } // [自动静态注释] 作用域/控制流边界
  if ((param_6 & 1) != 0) { // [自动静态注释] 条件判断/分支
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 0x10;
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(param_1 + 0x44) = (uint)*(ushort *)(param_4 + 0x20);
  uVar1 = *(undefined8 *)(param_4 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(uint *)(param_1 + 0x40) = (uint)*(ushort *)(param_4 + 0x24);
  uVar2 = FUN__text__006c19b0(param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if ((*(ushort *)(param_1 + 0x60) & 0x12) == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006a02a8(param_1,param_2,*(undefined8 *)(param_1 + 0x30),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


