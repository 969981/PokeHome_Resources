/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0041736C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051736c; name: FUN_.text__0051736c
 */


ulong FUN__text__0051736c(uint *param_1,ulong *param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return ((((((((((((param_3 & 0xff ^ 0xaf63bd4c8601b7df) * 0x100000001b3 ^ uVar2 & 0xff) * // [自动静态注释] 返回表达式；具体返回语义取决于调用者
                   0x100000001b3 ^ uVar2 >> 8 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x10 & 0xff) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 0x100000001b3 ^ uVar2 >> 0x18 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x20 & 0xff) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               0x100000001b3 ^ uVar2 >> 0x28 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x30 & 0xff) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             0x100000001b3 ^ uVar2 >> 0x38) * 0x100000001b3 ^ (ulong)uVar1 & 0xff) * 0x100000001b3 ^ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (ulong)(uVar1 >> 8) & 0xff) * 0x100000001b3 ^ (ulong)(uVar1 >> 0x10) & 0xff) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         0x100000001b3 ^ (ulong)(uVar1 >> 0x18); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界


