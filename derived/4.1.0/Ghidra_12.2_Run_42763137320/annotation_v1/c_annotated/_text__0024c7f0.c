/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0014C7F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0024c7f0; name: FUN_.text__0024c7f0
 */


uint FUN__text__0024c7f0(char *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ShowWebPageArg aSStack_2020 [8192]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 == (char *)0x0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  nn::web::ShowWebPageArg::ShowWebPageArg(aSStack_2020,param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bVar1 = SUB81(aSStack_2020,0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::web::ShowWebPageArg::SetJsExtensionEnabled(bVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::web::ShowWebPageArg::SetFooterFixedKind(aSStack_2020,DAT_008aa4f8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::web::ShowWebPageArg::SetPointerEnabled(bVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::web::ShowWebPageArg::SetLeftStickMode(aSStack_2020,DAT_008aa500); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::web::ShowWebPageArg::SetPageCacheEnabled(bVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    iVar2 = nn::web::ShowWebPage((WebPageReturnValue *)&DAT_008e2478,aSStack_2020); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar2 != 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    iVar2 = nn::web::WebPageReturnValue::GetWebExitReason(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (iVar2 == 2); // [自动静态注释] 循环/迭代
  uVar3 = nn::nifm::IsNetworkAvailable(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return uVar3 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


