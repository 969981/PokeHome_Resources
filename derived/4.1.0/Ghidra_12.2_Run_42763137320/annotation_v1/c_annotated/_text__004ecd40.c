/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003ECD40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ecd40; name: FUN_.text__004ecd40
 */


void FUN__text__004ecd40(long param_1,int param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar8 = *(long *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while( true ) { // [自动静态注释] 循环/迭代
    if (lVar8 == 0) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(lVar8 + 0x50) == param_3) break; // [自动静态注释] 条件判断/分支
    lVar8 = *(long *)(lVar8 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  plVar6 = *(long **)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar6 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar9 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      while (((plVar7 = plVar6, iVar4 = (**(code **)(*plVar7 + 0x10))(plVar7), iVar4 != 2 || // [自动静态注释] 循环/迭代
              ((int)plVar7[2] < param_2)) || (plVar7[3] != lVar8))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        plVar6 = (long *)plVar7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar9 = plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((long *)plVar7[1] == (long *)0x0) goto LAB__text__004ece2c; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      plVar6 = (long *)plVar7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1 = (long *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long **)(param_1 + 0x70) != plVar7) { // [自动静态注释] 条件判断/分支
        plVar1 = plVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *plVar1 = (long)plVar6;
      if (*(long **)(param_1 + 0x68) == plVar7) { // [自动静态注释] 条件判断/分支
        *(long **)(param_1 + 0x68) = plVar9;
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)*plVar7)(plVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00400fc0(0,plVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
    } while (plVar6 != (long *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
LAB__text__004ece2c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__004f53e0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x80)); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar5 = (undefined8 *)FUN__text__00400f80(0,0x28); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar5 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = *(undefined4 *)(lVar8 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined4 *)(lVar8 + 0x6c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(puVar5 + 2) = param_2;
  puVar5[3] = lVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(puVar5 + 4) = uVar3;
  *(undefined4 *)((long)puVar5 + 0x24) = uVar2;
  *puVar5 = 0x88f668;
  FUN__text__004ed750(param_1 + 0x60,puVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


