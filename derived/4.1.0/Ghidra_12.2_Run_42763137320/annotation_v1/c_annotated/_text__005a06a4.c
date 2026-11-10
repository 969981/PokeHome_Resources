/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A06A4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a06a4; name: FUN_.text__005a06a4
 */


/* WARNING: Removing unreachable block (ram,0x005a07a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a06a4(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *(long *)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = *(undefined8 **)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = (ulong)*(int *)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((ulong)((long)puVar1 - lVar4 >> 5) <= uVar5) { // [自动静态注释] 条件判断/分支
    if (puVar1 < *(undefined8 **)(param_1 + 0xf0)) { // [自动静态注释] 条件判断/分支
      uVar5 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = uVar5 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar5 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      puVar7 = puVar1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xf8);
      *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
      *puVar1 = 0;
      puVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[2] = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
      *(undefined8 **)(param_1 + 0xe8) = puVar7;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__005a09c0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar7 = *(undefined8 **)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar6 = *(undefined8 *)(param_1 + 0x148); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = *(int *)(param_1 + 0x150); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__006ec698(_DAT_008a0448); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005a5684(&local_60,uVar6,0,(long)iVar2,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar7[-4] = local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar7[-3] != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(puVar7[-3] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    puVar7[-3] = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7[-2] = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7[-1] = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__005b509c(&local_60); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_58 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar5 = (ulong)*(int *)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = *(long *)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__005b50f0(lVar4 + uVar5 * 0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006ec8a0(param_1,uVar3, // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined8 *)
                       (*(long *)(param_1 + 0xe0) + (long)*(int *)(param_1 + 0x158) * 0x20 + 0x10), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (long)*(int *)(param_1 + 0x150)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


