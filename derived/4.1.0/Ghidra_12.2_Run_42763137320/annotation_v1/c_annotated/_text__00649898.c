/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SWSH_PK8_Decode
 * 用途/行为：剑盾 PK8 原始 PKM 解密入口
 * 证据等级：VERIFIED_NATIVE_STATIC；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00649898; name: FUN_.text__00649898
 */


void FUN__text__00649898(undefined4 *param_1,undefined8 *param_2,void *param_3,undefined8 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  memcpy(param_1,param_3,0x148); // [自动静态注释] 内存复制、清零或移动
  uVar1 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = *param_4;
  param_2[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0063a140(param_1 + 2,0x140,*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0063a140(param_2,0x10,*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


