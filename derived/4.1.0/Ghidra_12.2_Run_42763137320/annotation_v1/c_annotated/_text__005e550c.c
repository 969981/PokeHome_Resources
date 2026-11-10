/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E550C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e550c; name: FUN_.text__005e550c
 */


void FUN__text__005e550c(undefined8 *param_1,undefined8 param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005e8538(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = 0x8977d8;
  param_1[9] = 0x897850; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb] = 0x897880; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x6e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x6f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x70] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = uVar1 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar1 != 0) && (*(long *)(uVar1 + 0x98) != 0)) { // [自动静态注释] 条件判断/分支
    lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != 0) goto LAB__text__005e557c; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = FUN__text__005f52b0(); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__005e557c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  param_1[0x71] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x72] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x73) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x74),false,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x78)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  param_1[0x7b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x7a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x79] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x7c] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x7d) = 1;
  *(undefined4 *)((long)param_1 + 0x3ec) = 0;
  param_1[0x7e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e8c7c(uVar1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)((long)param_1 + 0x3dc) = 0;
  if (*(long *)(uVar1 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = param_3;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
  lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x90,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_3 + 0xb8))(param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e1ef4(lVar2,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long **)(lVar2 + 8) = param_3;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x90;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar3 = param_1[0x79]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x79] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


