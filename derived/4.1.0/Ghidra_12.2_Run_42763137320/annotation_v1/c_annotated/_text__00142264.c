/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00042264
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00142264; name: FUN_.text__00142264
 */


void FUN__text__00142264(long *param_1,long param_2,long *param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_38 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*param_3 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_48 = *(undefined8 *)(param_2 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__001423ac(param_1,param_5,&local_40,&local_38,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_50 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00128598(lVar3,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_50 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_40 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_40 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = *(long **)(param_2 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 < *(long **)(param_2 + 0x88)) { // [自动静态注释] 条件判断/分支
    uVar2 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = uVar2 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar2 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_2 + 0x90);
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
    *plVar1 = local_40;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
    *(long **)(param_2 + 0x80) = plVar1 + 1;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00130fb0(param_2 + 0x78,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_40 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_2 + 0xc0) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


