/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00590ED0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00690ed0; name: FUN_.text__00690ed0
 */


void FUN__text__00690ed0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long **)(param_1 + 0x68) != (long *)(param_1 + 0x60)) { // [自动静态注释] 条件判断/分支
    plVar3 = *(long **)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar2 = (long *)plVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = *plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long **)(*plVar3 + 8) = plVar2;
      *plVar2 = *plVar3;
      *(long **)(lVar5 + 8) = plVar3;
      *plVar3 = lVar5;
      if ((*(byte *)(plVar3 + 7) >> 3 & 1) != 0) { // [自动静态注释] 条件判断/分支
        lVar5 = param_1 + (ulong)*(byte *)((long)plVar3 + 0x3b) * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar1 = (long *)(lVar5 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (plVar3 + 2 != plVar1) { // [自动静态注释] 条件判断/分支
          plVar6 = (long *)plVar3[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar7 = *plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(long **)(plVar3[2] + 8) = plVar6;
          *plVar6 = plVar3[2];
          *(long **)(lVar7 + 8) = plVar3 + 2;
          plVar3[2] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        plVar6 = *(long **)(lVar5 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (plVar6 == plVar1) { // [自动静态注释] 条件判断/分支
          sVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          do { // [自动静态注释] 循环/迭代
            plVar6 = (long *)plVar6[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (plVar6 != plVar1); // [自动静态注释] 循环/迭代
          sVar4 = *(short *)(*plVar1 + 0x30) + *(short *)(*plVar1 + 0x34) + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(short *)(param_1 + (ulong)*(byte *)((long)plVar3 + 0x3b) * 0x18 + 0x92) = sVar4;
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00691e30(param_1 + 0x30,(int)plVar3[6],*(undefined2 *)((long)plVar3 + 0x36), // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined2 *)((long)plVar3 + 0x34));
      plVar3 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar2 != (long *)(param_1 + 0x60)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x30) == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00692580(); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


