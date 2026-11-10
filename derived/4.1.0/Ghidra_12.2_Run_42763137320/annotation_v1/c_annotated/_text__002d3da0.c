/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001D3DA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d3da0; name: FUN_.text__002d3da0
 */


void FUN__text__002d3da0(long param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_2 & 1) == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__002ce534(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x270);
  puVar2 = *(uint **)(*(long *)(param_1 + 0x68) + 400); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) && // [自动静态注释] 条件判断/分支
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar4 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2 = (uint *)((long)piVar1 + uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5 = puVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*puVar2 != 0) { // [自动静态注释] 条件判断/分支
      uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        while( true ) { // [自动静态注释] 循环/迭代
          local_48 = (long)puVar6 + (ulong)*puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar3 = *(long **)(param_1 + 0x278); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(long **)(param_1 + 0x280) <= plVar3) break; // [自动静态注释] 条件判断/分支
          if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
            FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
          *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) =
               *(undefined8 *)(param_1 + 0x288);
          *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
          *plVar3 = local_48;
          *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
          *(long **)(param_1 + 0x278) = plVar3 + 1;
          puVar6 = puVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar6 == puVar5 + *puVar2) goto LAB__text__002d3eac; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__002d4280(param_1 + 0x270,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
        puVar6 = puVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (puVar6 != puVar5 + *puVar2); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__002d3eac: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__002ce534(param_1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


