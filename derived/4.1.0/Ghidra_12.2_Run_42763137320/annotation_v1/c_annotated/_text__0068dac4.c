/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0058DAC4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068dac4; name: FUN_.text__0068dac4
 */


uint FUN__text__0068dac4(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = 0x2d; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x30) == '\0' || param_2 != 0x2011) { // [自动静态注释] 条件判断/分支
    iVar1 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = FUN__text__0069128c(*(undefined8 *)(param_1 + 0x10),iVar1,*(undefined4 *)(param_1 + 0x18), // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined2 *)(param_1 + 0x32));
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x38) & 0x42) != 0)) { // [自动静态注释] 条件判断/分支
    if ((*(char *)(param_1 + 0x2f) != '\x02') && // [自动静态注释] 条件判断/分支
       (uVar4 = FUN__text__00691184(*(undefined8 *)(param_1 + 0x10),iVar1, // [自动静态注释] 调用尚未恢复正式名称的函数
                                    *(undefined2 *)(param_1 + 0x32)), (uVar4 & 1) != 0)) {
      uVar2 = FUN__text__0069142c(*(undefined8 *)(param_1 + 0x10),iVar1, // [自动静态注释] 调用尚未恢复正式名称的函数
                                  *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
      return uVar2 << 0x10 | (uVar2 & 0xff) << 8; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar3 = FUN__text__0069128c(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x34), // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
  } // [自动静态注释] 作用域/控制流边界
  return (uint)*(byte *)(lVar3 + 0x4c) << 0x10 | (uint)*(byte *)(lVar3 + 0x48) << 8 | // [自动静态注释] 返回表达式；具体返回语义取决于调用者
         (uint)*(byte *)(lVar3 + 0x4e); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界


