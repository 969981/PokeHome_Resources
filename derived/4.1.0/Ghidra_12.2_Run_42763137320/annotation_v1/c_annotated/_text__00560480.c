/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00460480
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00560480; name: FUN_.text__00560480
 */


uint FUN__text__00560480(long param_1,int param_2,long param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) { // [自动静态注释] 条件判断/分支
    uVar1 = FUN__text__00560524(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xb4);
  return uVar1 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


