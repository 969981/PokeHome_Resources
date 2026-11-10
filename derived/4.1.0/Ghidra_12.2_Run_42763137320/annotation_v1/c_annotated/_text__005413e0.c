/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004413E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005413e0; name: FUN_.text__005413e0
 */


bool FUN__text__005413e0(long param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_2 != (undefined4 *)0x0) && // [自动静态注释] 条件判断/分支
     ((lVar3 = *(long *)(param_1 + 0x168), *(long *)(param_1 + 0x128) != lVar3 || // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (*(long *)(param_2 + 0xe) != *(long *)(param_1 + 0x120))))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(long *)(param_1 + 0x138) == lVar3) { // [自动静态注释] 条件判断/分支
      if (*(char *)(*(long *)(param_1 + 0x130) + 0x54) == '\0') { // [自动静态注释] 条件判断/分支
        uVar2 = *(uint *)(*(long *)(param_2 + 0xe) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
          plVar4 = *(long **)(*(long *)(param_2 + 0xe) + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar3 = (ulong)uVar2 << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            if (*plVar4 == *(long *)(param_1 + 0x130)) goto LAB__text__00541510; // [自动静态注释] 条件判断/分支
            plVar4 = plVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            lVar3 = lVar3 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (lVar3 != 0); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        local_24 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4 = (long *)FUN__text__0051f820(lVar3,*(undefined8 *)(param_2 + 0xe),&local_24); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar5 = (ulong)local_24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (local_24 != 0) { // [自动静态注释] 条件判断/分支
          do { // [自动静态注释] 循环/迭代
            if (*plVar4 == *(long *)(param_1 + 0x130)) goto LAB__text__00541510; // [自动静态注释] 条件判断/分支
            uVar5 = uVar5 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            plVar4 = plVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (uVar5 != 0); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4) = *param_2;
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x10) = param_2[1];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x20) = param_2[2];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x30) = param_2[3];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x40) = param_2[4];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x50) = param_2[5];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x60) = param_2[6];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x70) = param_2[7];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x80) = param_2[8];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x90) = param_2[9];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0xa0) = param_2[10];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0xb0) = param_2[0xb];
    *(undefined4 **)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 8 + 0x148) = param_2;
    iVar1 = *(int *)(param_1 + 0x170) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x170) = iVar1;
    if (iVar1 == 4) { // [自动静态注释] 条件判断/分支
      FUN__text__005415a0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(param_1 + 0x170) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00541510: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return *(char *)(param_1 + 0x179) == '\0'; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


