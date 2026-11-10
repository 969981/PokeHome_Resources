/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001232C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002232c0; name: FUN_.text__002232c0
 */


undefined8 * FUN__text__002232c0(undefined8 param_1,long *param_2,long *param_3,long *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = uVar2 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar2 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x80,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar1 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_28 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_3 = 0;
  local_48 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_4 = 0;
  FUN__text__0012566c(puVar1,&local_28,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar1[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar1 = 0x872060;
  puVar1[9] = 0x8720c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[10] = 0x872108; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (local_28 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  puVar1[1] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[2] = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[3] = 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[4] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  return puVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


