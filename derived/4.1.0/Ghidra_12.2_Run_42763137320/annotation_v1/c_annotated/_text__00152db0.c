/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00052DB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00152db0; name: FUN_.text__00152db0
 */


void FUN__text__00152db0(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long *param_5,long *param_6,undefined1 *param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = uVar5 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar5 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  uVar3 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = *param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_68 = *param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_68 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00153240(uVar1,uVar3,uVar4,&local_48,&local_68,*param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_68 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_1[2] = 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *(long *)(uVar5 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = uVar1;
  param_1[1] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar5 + 0x98) = lVar2 + -1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


