/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002EA01C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ea01c; name: FUN_.text__003ea01c
 */


undefined8 FUN__text__003ea01c(undefined8 param_1,undefined8 param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = (**(code **)(**(long **)(param_3 + 8) + 0x10))(*(long **)(param_3 + 8),param_1,param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = *(undefined8 **)(param_3 + 0x350); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_40 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(undefined8 **)(param_3 + 0x358) <= puVar2) { // [自动静态注释] 条件判断/分支
    FUN__text__003eb120(param_3 + 0x348,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
    return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar3 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_3 + 0x360);
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  puVar2[1] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[2] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar2 = uVar1;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  *(undefined8 **)(param_3 + 0x350) = puVar2 + 3;
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


