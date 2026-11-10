/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000BD134
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001bd134; name: FUN_.text__001bd134
 */


void FUN__text__001bd134(long param_1,ulong param_2,byte param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_2 & 1) == 0) { // [自动静态注释] 条件判断/分支
    if (*(char *)(param_1 + 0x5a58) == '\0') { // [自动静态注释] 条件判断/分支
      iVar3 = FUN__text__001c1e90(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x108), // [自动静态注释] 调用尚未恢复正式名称的函数
                                  *(undefined4 *)(param_1 + 0x30));
      param_3 = iVar3 == 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      param_3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = *(long *)(param_1 + 8) + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = FUN__text__0012cb14(lVar1,param_1 + 0xd0); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar2 = param_3 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003a14c4(uVar4,bVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = FUN__text__0012cb14(lVar1,param_1 + 0x140); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14c4(uVar4,bVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = FUN__text__0012cb14(lVar1,param_1 + 0x1b0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)(param_1 + 0x4cc) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003a14c4(uVar4,bVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)(param_1 + 0x280) == '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = FUN__text__0012cb14(lVar1,param_1 + 0x288); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14c4(uVar4,param_3 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


