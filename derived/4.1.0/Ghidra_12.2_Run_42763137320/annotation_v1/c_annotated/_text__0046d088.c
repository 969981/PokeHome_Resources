/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0036D088
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046d088; name: FUN_.text__0046d088
 */


void FUN__text__0046d088(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_28 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char local_24 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_24[0] = '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0043e620(param_2,param_3,param_4,param_5,&local_30,local_24,local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((local_24[0] != '\0') && (local_30 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    uVar3 = FUN__text__0043d900((ulong)*(uint *)(param_2 + 0x10) | 0x400000000,local_30 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
      *(int *)((long)local_30 + 0xbc) = *(int *)((long)local_30 + 0xbc) + 1;
      FUN__text__004449ec(); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00444060(local_30); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar2 = local_30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar1 = *(int *)((long)local_30 + 0xbc) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)((long)local_30 + 0xbc) = iVar1;
      if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*local_30 + 0x10))(local_30); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__00400fc0(0,plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__0046e348(*param_1,local_30); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


