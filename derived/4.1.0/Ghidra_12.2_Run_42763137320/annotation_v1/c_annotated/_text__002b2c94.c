/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001B2C94
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b2c94; name: FUN_.text__002b2c94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002b2c94(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x10,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar3 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  FUN__text__002c438c(lVar2,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = _DAT_008a2368; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[8] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar1 + 0x10;
  param_1[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xf),true,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x13),true,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined2 *)(param_1 + 0x17) = 0;
  FUN__text__002b4c10(param_1 + 1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x1a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = _DAT_008a2370; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x18] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x19] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1d] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x24] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x2a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x30] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x20] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x21] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x22] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x23] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x26] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x27] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x28] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x29] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2f] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__002b2e30(param_1 + 0x1a,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__002b2fd0(param_1 + 0x20,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__002b2fd0(param_1 + 0x26,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__002b2fd0(param_1 + 0x2c,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


