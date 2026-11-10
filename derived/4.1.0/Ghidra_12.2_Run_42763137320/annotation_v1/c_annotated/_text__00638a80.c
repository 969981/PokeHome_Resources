/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00538A80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00638a80; name: FUN_.text__00638a80
 */


uint FUN__text__00638a80(uint param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        uint param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = (((param_2 & 0xffff) * 2 + (param_3 & 0xffff) + ((param_4 & 0xfffc) >> 2)) * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          (param_1 & 0xff)) / 100 + 5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  cVar2 = *(char *)((ulong)(param_6 & 0xffff) * 5 + 0x75accf); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (cVar2 == -1) { // [自动静态注释] 条件判断/分支
    iVar3 = 0x5a; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (cVar2 != '\x01') { // [自动静态注释] 条件判断/分支
      return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    iVar3 = 0x6e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return (uVar1 * iVar3 >> 2 & 0x3fff) / 0x19; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


