/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002C8680
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c8680; name: FUN_.text__003c8680
 */


void FUN__text__003c8680(long param_1,undefined8 *param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_28 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_40 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_38 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_30 = (undefined4)param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *(long *)(param_1 + 0x2c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(param_1 + 0x2c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined8 *)(lVar2 + lVar3 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 == *(long *)(param_1 + 0x2d0)) { // [自动静态注释] 条件判断/分支
    FUN__text__003c9310(auStack_28,param_1 + 0x280,puVar1,1,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_38 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x280);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *puVar1 = local_40;
    lVar2 = lVar2 + lVar3 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(lVar2 + 8) = local_38;
    *(undefined4 *)(lVar2 + 0x10) = local_30;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(long *)(param_1 + 0x2c8) = *(long *)(param_1 + 0x2c8) + 1;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


