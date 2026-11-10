/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003C7660
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c7660; name: FUN_.text__004c7660
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__004c7660(long param_1,uint param_2,uint param_3,int param_4,void *param_5,int param_6) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = param_1 + (ulong)param_2 * 0x48 + (ulong)param_3 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = (ulong)param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = (long *)(lVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*plVar4 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = (undefined4 *)(param_1 + (ulong)param_2 * 0x48 + uVar7 * 0x18 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar2 = 1;
  *plVar4 = 0;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  if ((param_4 != 0) && (param_5 != (void *)0x0)) { // [自动静态注释] 条件判断/分支
    *puVar2 = 1;
    puVar6 = (uint *)(param_1 + (ulong)param_2 * 0x48 + uVar7 * 0x18 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar6 = param_4 + 2U;
    lVar3 = FUN__text__00400f80(0,(param_4 + 2U) * 0x14); // [自动静态注释] 调用尚未恢复正式名称的函数
    *plVar4 = lVar3;
    if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
      *puVar6 = 0;
      uVar1 = 0x34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      piVar5 = (int *)(param_1 + (ulong)param_2 * 0x48 + uVar7 * 0x18 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *piVar5 = param_6;
      memcpy((void *)(lVar3 + 0xc),param_5,(ulong)(uint)(param_4 * 0xc)); // [自动静态注释] 内存复制、清零或移动
      *(undefined4 *)(*plVar4 + 8) = 9;
      *(undefined4 *)*plVar4 = 0xff7fffff;
      *(undefined4 *)(*plVar4 + 4) = *(undefined4 *)(*plVar4 + 0x10);
      *(undefined4 *)(*plVar4 + (ulong)(*puVar6 - 1) * 0xc + 8) = 9;
      *(undefined4 *)(*plVar4 + (ulong)(*puVar6 - 1) * 0xc) = 0x7f7fffff;
      *(undefined4 *)(*plVar4 + (ulong)(*puVar6 - 1) * 0xc + 4) =
           *(undefined4 *)(*plVar4 + (ulong)(*puVar6 - 2) * 0xc + 4);
      FUN__text__00432e60(plVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (param_3 == 0) { // [自动静态注释] 条件判断/分支
        if (*piVar5 == 0) { // [自动静态注释] 条件判断/分支
          *piVar5 = 4;
        } // [自动静态注释] 作用域/控制流边界
        else if (*piVar5 == 2) { // [自动静态注释] 条件判断/分支
          if (*puVar6 != 0) { // [自动静态注释] 条件判断/分支
            uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            lVar3 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            do { // [自动静态注释] 循环/迭代
              uVar7 = uVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(float *)(*plVar4 + lVar3) = *(float *)(*plVar4 + lVar3) + 1.0;
              lVar3 = lVar3 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } while (uVar7 < *puVar6); // [自动静态注释] 循环/迭代
          } // [自动静态注释] 作用域/控制流边界
          *piVar5 = 0;
          FUN__text__00432e60(plVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      uVar1 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


