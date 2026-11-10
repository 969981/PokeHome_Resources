/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0054C700
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064c700; name: FUN_.text__0064c700
 */


undefined8 FUN__text__0064c700(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  AsyncContext *this; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(char *)(param_1 + 0x89) != '\0') && // [自动静态注释] 条件判断/分支
     (uVar1 = nn::nifm::IsNetworkAvailable(), (uVar1 & 1) != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_24 = nn::account::EnsureNetworkServiceAccountAvailable((UserHandle *)(param_1 + 0x60)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_24 == 0) { // [自动静态注释] 条件判断/分支
      if (*(long *)(param_1 + 0xca0) != 0) { // [自动静态注释] 条件判断/分支
        nn::account::AsyncContext::Cancel(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      plVar2 = *(long **)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      this = (AsyncContext *)(**(code **)(*plVar2 + 0x10))(plVar2,0x20,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = uVar1 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar1 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = plVar2;
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
      nn::account::AsyncContext::AsyncContext(this); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
      puVar4 = *(undefined8 **)(param_1 + 0xca0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(AsyncContext **)(param_1 + 0xca0) = this;
      if (puVar4 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)*puVar4)(puVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(**(long **)(param_1 + 0xca8) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (*(long **)(param_1 + 0xca8),puVar4,*(undefined8 *)(param_1 + 0xcb0), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   *(undefined8 *)(param_1 + 0xcb8));
        this = *(AsyncContext **)(param_1 + 0xca0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(long **)(param_1 + 0xca8) = plVar2;
      *(undefined8 *)(param_1 + 0xcb0) = 0x20;
      *(undefined8 *)(param_1 + 0xcb8) = 8;
      local_24 = nn::account::EnsureNetworkServiceAccountIdTokenCacheAsync // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                           (this,(UserHandle *)(param_1 + 0x60)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (local_24 == 0) { // [自动静态注释] 条件判断/分支
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      puVar4 = *(undefined8 **)(param_1 + 0xca0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0xca0) = 0;
      if (puVar4 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)*puVar4)(puVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(**(long **)(param_1 + 0xca8) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (*(long **)(param_1 + 0xca8),puVar4,*(undefined8 *)(param_1 + 0xcb0), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   *(undefined8 *)(param_1 + 0xcb8));
      } // [自动静态注释] 作用域/控制流边界
      plVar2 = *(long **)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar3 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar2 = *(long **)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar3 = 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*plVar2 + lVar3 * 8))(plVar2,&local_24); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


