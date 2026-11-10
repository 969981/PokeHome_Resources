/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00501750
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00601750; name: FUN_.text__00601750
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00601750(long *param_1,long *param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = _DAT_008a5d60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5 = param_1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar5 = 0;
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(char *)(param_1 + 5) = (char)param_3;
  *(undefined1 *)((long)param_1 + 0x29) = 0;
  *param_1 = lVar1 + 0x10;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)param_3 * 0x1a0,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar6 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = param_2;
  lVar2 = *(long *)(uVar6 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar6 + 0x98) = lVar2 + 1;
  if (param_3 != 0) { // [自动静态注释] 条件判断/分支
    uVar7 = (ulong)param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      FUN__text__006014f0(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar7 = uVar7 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = lVar2 + 0x1a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar7 != 0); // [自动静态注释] 循环/迭代
    lVar2 = *(long *)(uVar6 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(uVar6 + 0x98) = lVar2;
  puVar4 = (undefined8 *)*plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar5 = lVar1;
  if (puVar4 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    uVar6 = param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (0x19f < uVar6) { // [自动静态注释] 条件判断/分支
      uVar6 = uVar6 / 0x1a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar3 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        (**(code **)*puVar3)(puVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar6 = uVar6 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar3 = puVar3 + 0x34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar6 != 0); // [自动静态注释] 循环/迭代
      uVar6 = param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],puVar4,uVar6,param_1[4]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_1[2] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = (ulong)param_3 * 0x1a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


