/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005388F8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006388f8; name: FUN_.text__006388f8
 */


uint FUN__text__006388f8(byte param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        uint param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  cVar1 = *(char *)((ulong)(param_6 & 0xffff) * 5 + 0x75accc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = (uint)(((float)param_1 * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 (float)((param_2 & 0xffff) * 2 + (param_3 & 0xffff) + ((param_4 & 0xfffc) >> 2))) / // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 100.0 + 5.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (cVar1 == -1) { // [自动静态注释] 条件判断/分支
    iVar3 = 0x5a; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (cVar1 != '\x01') { // [自动静态注释] 条件判断/分支
      return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    iVar3 = 0x6e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return (uVar2 * iVar3 >> 2 & 0x3fff) / 0x19; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


