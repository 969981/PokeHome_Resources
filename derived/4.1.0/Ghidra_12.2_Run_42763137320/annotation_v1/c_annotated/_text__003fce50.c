/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002FCE50
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fce50; name: FUN_.text__003fce50
 */


long FUN__text__003fce50(long *param_1,int *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  bVar4 = *(byte *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uint)bVar4 < *(uint *)(param_1 + 0x15)) { // [自动静态注释] 条件判断/分支
    uVar6 = bVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar7 = param_1 + 0x17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = uVar6 & 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (2 < bVar4) { // [自动静态注释] 条件判断/分支
      uVar6 = uVar6 & 0x1fc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar6 = uVar6 - 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar7 = *(long **)**(undefined8 **)*plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar6 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    for (; uVar2 != 0; uVar2 = uVar2 - 1) { // [自动静态注释] 循环/迭代
      plVar7 = (long *)*plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)plVar7[1] + (ulong)*(uint *)(plVar7 + 2) == param_1[0xf]) { // [自动静态注释] 条件判断/分支
      *(byte *)(param_1 + 0x18) = bVar4 + 1;
      param_1[0xf] = *(long *)plVar7[1] + (ulong)*(uint *)((long *)plVar7[1] + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_2 = *(int *)(plVar7[1] + 0x18) - *(int *)(plVar7 + 2);
      uVar6 = *(uint *)(param_1 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = *(long *)plVar7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = *(uint *)((long *)plVar7[1] + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = lVar5 + (ulong)*(uint *)(plVar7 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar3 = (int)uVar1 - uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar5 + (ulong)uVar2 <= (ulong)uVar6 || uVar6 <= uVar1) { // [自动静态注释] 条件判断/分支
        iVar3 = *(uint *)(plVar7 + 2) - uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(int *)(param_1 + 0x13) = iVar3 + (int)param_1[0x13];
      FUN__text__003fc6a8(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      return *(long *)(plVar7[1] + 8) + (ulong)*(uint *)(plVar7 + 2); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*param_1 + 0x110))(param_1,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__003fc040(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *param_2 = 0;
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


