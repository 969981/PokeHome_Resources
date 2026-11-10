/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：BDSP_PB8_Encode
 * 用途/行为：BDSP PB8 原始 PKM 加密入口
 * 证据等级：VERIFIED_NATIVE_STATIC；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00641678; name: FUN_.text__00641678
 */


void FUN__text__00641678(undefined4 *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined2 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__0063a010(param_1 + 2,0x140); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined2 *)((long)param_1 + 6) = uVar1;
  FUN__text__0063a0c0(param_1 + 2,0x140,*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0063a0c0(param_2,0x10,*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


