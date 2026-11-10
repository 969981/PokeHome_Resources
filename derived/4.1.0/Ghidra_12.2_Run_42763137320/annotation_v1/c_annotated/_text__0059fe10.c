/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0049FE10
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059fe10; name: FUN_.text__0059fe10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0059fe10(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = _DAT_0089f690 + 0x10;
  uVar2 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = _DAT_008a5580; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = uVar2 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar2 == 0) || (*(long *)(uVar2 + 0x98) == 0)) { // [自动静态注释] 条件判断/分支
    plVar3 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar3 = *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5 = param_1 + 0xb; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar5 = 0;
  param_1[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x20) = param_4;
  param_1[9] = lVar1 + 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0x104) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x21) = 1;
  *param_1 = lVar1 + 0x10;
  param_1[1] = (long)plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x12] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0x2d0,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar2 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = plVar3;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  FUN__text__005a03e4(lVar1,plVar3,param_5,param_2,param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005a03e4(lVar1 + 0x168,plVar3,param_5,param_2,param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  lVar4 = *plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar5 = lVar1;
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = param_1[0xd]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (0x167 < uVar2) { // [自动静态注释] 条件判断/分支
      uVar2 = uVar2 / 0x168; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar1 = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        FUN__text__005a0590(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar2 = uVar2 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar1 = lVar1 + 0x168; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar2 != 0); // [自动静态注释] 循环/迭代
      uVar2 = param_1[0xd]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*(long *)param_1[0xc] + 0x18))((long *)param_1[0xc],lVar4,uVar2,param_1[0xe]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_1[0xc] = (long)plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xd] = 0x2d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xe] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


