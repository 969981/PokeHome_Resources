/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000922A0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001922a0; name: FUN_.text__001922a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001922a0(long *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = _DAT_008a05a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = lVar5 + 0x10;
  memset((void *)((long)param_1 + 0x14),0,0x3c4); // [自动静态注释] 内存复制、清零或移动
  FUN__text__0015c5c4(&local_48,param_2,_DAT_008a0590); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1[1] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_1[1] = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while( true ) { // [自动静态注释] 循环/迭代
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar6 + 0x98) == 0x10) break; // [自动静态注释] 条件判断/分支
    lVar4 = uVar6 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(lVar4 + *(long *)(uVar6 + 0x98) * 8) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    FUN__text__00192280(uVar1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar5 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)((long)param_1 + lVar5 + 0x18) = uVar1;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = *(long **)((long)param_1 + lVar5 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar2 + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar5 + 0x28), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)((long)param_1 + lVar5 + 0x30));
    } // [自动静态注释] 作用域/控制流边界
    *(long **)((long)param_1 + lVar5 + 0x20) = param_2;
    *(undefined8 *)((long)param_1 + lVar5 + 0x28) = 0x20;
    *(undefined8 *)((long)param_1 + lVar5 + 0x30) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar6 + 0x98) == 0x10) break; // [自动静态注释] 条件判断/分支
    *(long **)(lVar4 + *(long *)(uVar6 + 0x98) * 8) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    FUN__text__00192280(uVar1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar5 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)((long)param_1 + lVar5 + 0xb8) = uVar1;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = *(long **)((long)param_1 + lVar5 + 0xc0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar2 + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar5 + 200), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)((long)param_1 + lVar5 + 0xd0));
    } // [自动静态注释] 作用域/控制流边界
    *(long **)((long)param_1 + lVar5 + 0xc0) = param_2;
    *(undefined8 *)((long)param_1 + lVar5 + 200) = 0x20;
    *(undefined8 *)((long)param_1 + lVar5 + 0xd0) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar6 + 0x98) == 0x10) break; // [自动静态注释] 条件判断/分支
    *(long **)(lVar4 + *(long *)(uVar6 + 0x98) * 8) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    FUN__text__00192280(uVar1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar5 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)((long)param_1 + lVar5 + 0x158) = uVar1;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = *(long **)((long)param_1 + lVar5 + 0x160); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar2 + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar5 + 0x168), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)((long)param_1 + lVar5 + 0x170));
    } // [自动静态注释] 作用域/控制流边界
    *(long **)((long)param_1 + lVar5 + 0x160) = param_2;
    *(undefined8 *)((long)param_1 + lVar5 + 0x168) = 0x20;
    *(undefined8 *)((long)param_1 + lVar5 + 0x170) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar6 + 0x98) == 0x10) break; // [自动静态注释] 条件判断/分支
    *(long **)(lVar4 + *(long *)(uVar6 + 0x98) * 8) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    FUN__text__00192280(uVar1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar5 + 0x1f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)((long)param_1 + lVar5 + 0x1f8) = uVar1;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = *(long **)((long)param_1 + lVar5 + 0x200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar2 + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar5 + 0x208), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)((long)param_1 + lVar5 + 0x210));
    } // [自动静态注释] 作用域/控制流边界
    *(long **)((long)param_1 + lVar5 + 0x200) = param_2;
    *(undefined8 *)((long)param_1 + lVar5 + 0x208) = 0x20;
    *(undefined8 *)((long)param_1 + lVar5 + 0x210) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar6 + 0x98) == 0x10) break; // [自动静态注释] 条件判断/分支
    *(long **)(lVar4 + *(long *)(uVar6 + 0x98) * 8) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    FUN__text__00192280(uVar1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar5 + 0x298); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)((long)param_1 + lVar5 + 0x298) = uVar1;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = *(long **)((long)param_1 + lVar5 + 0x2a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar2 + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar5 + 0x2a8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)((long)param_1 + lVar5 + 0x2b0));
    } // [自动静态注释] 作用域/控制流边界
    *(long **)((long)param_1 + lVar5 + 0x2a0) = param_2;
    *(undefined8 *)((long)param_1 + lVar5 + 0x2a8) = 0x20;
    *(undefined8 *)((long)param_1 + lVar5 + 0x2b0) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar6 + 0x98) == 0x10) break; // [自动静态注释] 条件判断/分支
    *(long **)(lVar4 + *(long *)(uVar6 + 0x98) * 8) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    FUN__text__00192280(uVar1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    lVar4 = *(long *)((long)param_1 + lVar5 + 0x338); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)((long)param_1 + lVar5 + 0x338) = uVar1;
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = *(long **)((long)param_1 + lVar5 + 0x340); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar2 + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar2,lVar4,*(undefined8 *)((long)param_1 + lVar5 + 0x348), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)((long)param_1 + lVar5 + 0x350));
    } // [自动静态注释] 作用域/控制流边界
    lVar4 = lVar5 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)((long)param_1 + lVar5 + 0x340) = param_2;
    *(undefined8 *)((long)param_1 + lVar5 + 0x348) = 0x20;
    *(undefined8 *)((long)param_1 + lVar5 + 0x350) = 8;
    lVar5 = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar4 == 0xa0) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界


