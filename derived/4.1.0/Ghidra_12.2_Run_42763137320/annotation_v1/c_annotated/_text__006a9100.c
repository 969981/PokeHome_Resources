/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A9100
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a9100; name: FUN_.text__006a9100
 */


void FUN__text__006a9100(long *param_1,long param_2,long param_3,undefined8 param_4,uint param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__00699b8c(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar2 = FUN__text__00699ba4(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = FUN__text__0069e6c0(param_4,lVar2 + lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*param_1 + 0x58))(param_1,uVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar4 = lVar4 + 0x24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (((ulong)uVar1 + (ulong)uVar1 * 8) * 4 != lVar4); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = *(long *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xc] = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    /* WARNING: Could not recover jumptable at 0x006a91b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_5 & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


