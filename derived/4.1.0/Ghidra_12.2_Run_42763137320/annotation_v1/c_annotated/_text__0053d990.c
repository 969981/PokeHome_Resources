/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0043D990
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053d990; name: FUN_.text__0053d990
 */


/* WARNING: Removing unreachable block (ram,0x0053dabc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__0053d990(long *param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = FUN__text__00400f90(0xb,(ulong)uVar1 * 0x50,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    lVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((lVar6 != 0) && (lVar6 != lVar5)) { // [自动静态注释] 条件判断/分支
      if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
        lVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar6 = _DAT_008a4288 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          plVar3 = (long *)(lVar5 + lVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *plVar3 = lVar6;
          plVar3[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar3[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar3[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar3[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar3[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(plVar3 + 5) = 0;
          plVar3[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar3[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar3[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar2 = *param_1 + lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar3[7] = *(long *)(lVar2 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(plVar3 + 8) = *(undefined4 *)(lVar2 + 0x40);
          *(undefined4 *)((long)plVar3 + 0x44) = *(undefined4 *)(lVar2 + 0x44);
          *(undefined8 *)(lVar2 + 0x38) = 0;
          *(undefined8 *)(lVar2 + 0x40) = 0;
          plVar3[6] = *(long *)(lVar2 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar8 = *(long *)(lVar2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar7 = *(long *)(lVar2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar3[1] = *(long *)(lVar2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar3[2] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar3[3] = lVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar7 = *(long *)(lVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(lVar2 + 0x28);
          plVar3[4] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(plVar3 + 9) = *(undefined4 *)(lVar2 + 0x48);
          *(undefined4 *)((long)plVar3 + 0x4c) = *(undefined4 *)(lVar2 + 0x4c);
          (*(code *)**(undefined8 **)(*param_1 + lVar9))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          lVar9 = lVar9 + 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while ((ulong)uVar4 * 0x50 != lVar9); // [自动静态注释] 循环/迭代
        lVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00400fc0(0xb,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  } // [自动静态注释] 作用域/控制流边界
  return lVar5 != 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


