/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000918F0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001918f0; name: FUN_.text__001918f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001918f0(long *param_1,long *param_2,ulong param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = _DAT_008a0588; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = lVar5 + 0x10;
  param_1[1] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset((void *)((long)param_1 + 0x2c),0,0x3c4); // [自动静态注释] 内存复制、清零或移动
  FUN__text__0015c5c4(&lStack_68,param_2,_DAT_008a0590); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1[4] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = lStack_68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = param_3 & 0xffffffff | // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          (ulong)(uint)((int)param_4 + (int)((ulong)param_4 >> 0x20) * 6 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                       (int)(param_3 >> 0x20) * 0x1e) << 0x20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar8 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = uVar8 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while( true ) { // [自动静态注释] 循环/迭代
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar8 + 0x98) == 0x10) break; // [自动静态注释] 条件判断/分支
    lVar4 = uVar8 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(lVar4 + *(long *)(uVar8 + 0x98) * 8) = param_2;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    FUN__text__00191894(uVar1,param_2,uVar6,lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar7 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)((long)param_1 + lVar7 + 0x30) = uVar1;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = *(long **)((long)param_1 + lVar7 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar2 + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar7 + 0x40), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)((long)param_1 + lVar7 + 0x48));
    } // [自动静态注释] 作用域/控制流边界
    *(long **)((long)param_1 + lVar7 + 0x38) = param_2;
    *(undefined8 *)((long)param_1 + lVar7 + 0x40) = 0x60;
    *(undefined8 *)((long)param_1 + lVar7 + 0x48) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar8 + 0x98) == 0x10) break; // [自动静态注释] 条件判断/分支
    *(long **)(lVar4 + *(long *)(uVar8 + 0x98) * 8) = param_2;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    FUN__text__00191894(uVar1,param_2,uVar6,lVar5 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar7 + 0xd0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)((long)param_1 + lVar7 + 0xd0) = uVar1;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = *(long **)((long)param_1 + lVar7 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar2 + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar7 + 0xe0), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)((long)param_1 + lVar7 + 0xe8));
    } // [自动静态注释] 作用域/控制流边界
    *(long **)((long)param_1 + lVar7 + 0xd8) = param_2;
    *(undefined8 *)((long)param_1 + lVar7 + 0xe0) = 0x60;
    *(undefined8 *)((long)param_1 + lVar7 + 0xe8) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar8 + 0x98) == 0x10) break; // [自动静态注释] 条件判断/分支
    *(long **)(lVar4 + *(long *)(uVar8 + 0x98) * 8) = param_2;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    FUN__text__00191894(uVar1,param_2,uVar6,lVar5 + 2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar7 + 0x170); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)((long)param_1 + lVar7 + 0x170) = uVar1;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = *(long **)((long)param_1 + lVar7 + 0x178); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar2 + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar7 + 0x180), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)((long)param_1 + lVar7 + 0x188));
    } // [自动静态注释] 作用域/控制流边界
    *(long **)((long)param_1 + lVar7 + 0x178) = param_2;
    *(undefined8 *)((long)param_1 + lVar7 + 0x180) = 0x60;
    *(undefined8 *)((long)param_1 + lVar7 + 0x188) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar8 + 0x98) == 0x10) break; // [自动静态注释] 条件判断/分支
    *(long **)(lVar4 + *(long *)(uVar8 + 0x98) * 8) = param_2;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    FUN__text__00191894(uVar1,param_2,uVar6,lVar5 + 3); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar7 + 0x210); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)((long)param_1 + lVar7 + 0x210) = uVar1;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = *(long **)((long)param_1 + lVar7 + 0x218); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar2 + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar7 + 0x220), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)((long)param_1 + lVar7 + 0x228));
    } // [自动静态注释] 作用域/控制流边界
    *(long **)((long)param_1 + lVar7 + 0x218) = param_2;
    *(undefined8 *)((long)param_1 + lVar7 + 0x220) = 0x60;
    *(undefined8 *)((long)param_1 + lVar7 + 0x228) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar8 + 0x98) == 0x10) break; // [自动静态注释] 条件判断/分支
    *(long **)(lVar4 + *(long *)(uVar8 + 0x98) * 8) = param_2;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    FUN__text__00191894(uVar1,param_2,uVar6,lVar5 + 4); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar7 + 0x2b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)((long)param_1 + lVar7 + 0x2b0) = uVar1;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = *(long **)((long)param_1 + lVar7 + 0x2b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar2 + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar7 + 0x2c0), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)((long)param_1 + lVar7 + 0x2c8));
    } // [自动静态注释] 作用域/控制流边界
    *(long **)((long)param_1 + lVar7 + 0x2b8) = param_2;
    *(undefined8 *)((long)param_1 + lVar7 + 0x2c0) = 0x60;
    *(undefined8 *)((long)param_1 + lVar7 + 0x2c8) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar8 + 0x98) == 0x10) break; // [自动静态注释] 条件判断/分支
    *(long **)(lVar4 + *(long *)(uVar8 + 0x98) * 8) = param_2;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    FUN__text__00191894(uVar1,param_2,uVar6,lVar5 + 5); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    lVar4 = *(long *)((long)param_1 + lVar7 + 0x350); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)((long)param_1 + lVar7 + 0x350) = uVar1;
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = *(long **)((long)param_1 + lVar7 + 0x358); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar2 + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar2,lVar4,*(undefined8 *)((long)param_1 + lVar7 + 0x360), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)((long)param_1 + lVar7 + 0x368));
    } // [自动静态注释] 作用域/控制流边界
    lVar4 = lVar7 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)((long)param_1 + lVar7 + 0x358) = param_2;
    lVar5 = lVar5 + 0x100000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)((long)param_1 + lVar7 + 0x360) = 0x60;
    *(undefined8 *)((long)param_1 + lVar7 + 0x368) = 8;
    lVar7 = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar4 == 0xa0) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界


