/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00572C34
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00672c34; name: FUN_.text__00672c34
 */


void FUN__text__00672c34(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar3 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  auVar3 = FUN__text__0066c6a8(); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar1 = FUN__text__0066c6d8(auVar3._0_8_,auVar3._8_8_, // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined8 *)(*(long *)(param_1 + 0x1100) + 0x40),
                              *(undefined8 *)(*(long *)(param_1 + 0x1100) + 0x48));
  if (999 < iVar1) { // [自动静态注释] 条件判断/分支
    local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__00651324(param_1,*(undefined8 *)(param_1 + 0x1100),&local_40, // [自动静态注释] 调用尚未恢复正式名称的函数
                                FUN__text__00673c5c); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    while ((uVar2 & 1) != 0) { // [自动静态注释] 循环/迭代
      FUN__text__00670414(param_1,local_38,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar2 = FUN__text__00651324(param_1,*(undefined8 *)(param_1 + 0x1100),&local_40, // [自动静态注释] 调用尚未恢复正式名称的函数
                                  FUN__text__00673c5c); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 (*) [16])(*(long *)(param_1 + 0x1100) + 0x40) = auVar3;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


