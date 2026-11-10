/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005901B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006901b0; name: FUN_.text__006901b0
 */


byte FUN__text__006901b0(long param_1,int param_2,undefined4 param_3,uint param_4,uint param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        byte param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_44 [17]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  while( true ) { // [自动静态注释] 循环/迭代
    local_44[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar1 = 0x2d; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_2 == 0x2011 & param_6) == 0) { // [自动静态注释] 条件判断/分支
      iVar1 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = FUN__text__00690390(param_1,local_44,param_4 & 0xffff,iVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_4 = local_44[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar6 = param_1 + 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = FUN__text__00691ba0(lVar6,iVar1,param_3,local_44[0]); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      bVar2 = *(byte *)(lVar4 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)(lVar4 + 0x38) = bVar2 | 1;
      if (-1 < (int)param_5) { // [自动静态注释] 条件判断/分支
        *(uint *)(lVar4 + 0x3c) = *(uint *)(lVar4 + 0x3c) | 1 << (ulong)(param_5 & 0x1f);
      } // [自动静态注释] 作用域/控制流边界
      return bVar2 >> 1 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    plVar5 = (long *)FUN__text__00691bec(lVar6,iVar1,param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (plVar5 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      *(byte *)(plVar5 + 7) = *(byte *)(plVar5 + 7) | 3;
      if (-1 < (int)param_5) { // [自动静态注释] 条件判断/分支
        *(uint *)((long)plVar5 + 0x3c) =
             *(uint *)((long)plVar5 + 0x3c) | 1 << (ulong)(param_5 & 0x1f);
      } // [自动静态注释] 作用域/控制流边界
      lVar6 = *plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar7 = (long *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar5 = *plVar7;
      *(long **)(lVar6 + 8) = plVar7;
      *(long **)(*plVar7 + 8) = plVar5;
      *plVar7 = lVar6;
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*(long **)(param_1 + 0x78) == (long *)(param_1 + 0x70)) break; // [自动静态注释] 条件判断/分支
    iVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar5 = *(long **)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar7 = (long *)plVar5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*(byte *)(plVar5 + 7) & 0x11) == 0) { // [自动静态注释] 条件判断/分支
        lVar4 = *plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long **)(*plVar5 + 8) = plVar7;
        *plVar7 = *plVar5;
        *(long **)(lVar4 + 8) = plVar5;
        *plVar5 = lVar4;
        FUN__text__00691e30(lVar6,(int)plVar5[6],*(undefined2 *)((long)plVar5 + 0x36), // [自动静态注释] 调用尚未恢复正式名称的函数
                            *(undefined2 *)((long)plVar5 + 0x34));
        iVar8 = iVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      plVar5 = plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar7 != (long *)(param_1 + 0x70)); // [自动静态注释] 循环/迭代
    if (iVar8 == 0) break; // [自动静态注释] 条件判断/分支
    param_6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2 = iVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x1bcc) = 1;
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


