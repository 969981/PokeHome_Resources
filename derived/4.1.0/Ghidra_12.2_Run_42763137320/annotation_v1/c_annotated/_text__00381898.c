/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00281898
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00381898; name: FUN_.text__00381898
 */


void FUN__text__00381898(undefined8 *param_1,long param_2,undefined4 *param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_18 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = (**(code **)(**(long **)(param_2 + 0x38) + 0x10))(*(long **)(param_2 + 0x38),param_4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_38 == 0) { // [自动静态注释] 条件判断/分支
    *param_1 = 0;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((*(long **)(param_2 + 0x58) == (long *)0x0) || // [自动静态注释] 条件判断/分支
     (*(long *)(param_2 + 0x10) != *(long *)(param_2 + 0x18))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar2 = *(undefined4 **)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(undefined4 **)(param_2 + 0x18) <= puVar2) { // [自动静态注释] 条件判断/分支
LAB__text__00381980: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__003819c0(param_2 + 8,param_3,&local_38,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar3 = *(undefined4 **)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__00381998; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(**(long **)(param_2 + 0x58) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar2 = *(undefined4 **)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(undefined4 **)(param_2 + 0x18) <= puVar2) goto LAB__text__00381980; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  uVar1 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(puVar2 + 6) = local_18;
  *(long *)(puVar2 + 2) = local_38;
  *(undefined8 *)(puVar2 + 4) = local_18;
  puVar3 = puVar2 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar2 = uVar1;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  *(undefined4 **)(param_2 + 0x10) = puVar3;
LAB__text__00381998: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *param_1 = puVar3 + -8;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


