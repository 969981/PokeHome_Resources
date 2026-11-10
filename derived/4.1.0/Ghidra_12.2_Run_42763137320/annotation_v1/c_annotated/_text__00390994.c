/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00290994
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00390994; name: FUN_.text__00390994
 */


void FUN__text__00390994(undefined8 param_1,undefined4 param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_3 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00631008(); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = FUN__text__005fdb18(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (uVar1 < 0x402) { // [自动静态注释] 条件判断/分支
      uVar2 = FUN__text__00631010(*param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = FUN__text__005fdad0(uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((1 < (int)uVar3 - 0x298U) && ((int)uVar3 != 0x2e8)) { // [自动静态注释] 条件判断/分支
        uVar5 = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar4 = FUN__text__0038f620(uVar3,param_2,uVar1,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((uVar4 & 1) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__00390680(param_1,0,param_2,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__00390680(param_1,1,param_2,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


