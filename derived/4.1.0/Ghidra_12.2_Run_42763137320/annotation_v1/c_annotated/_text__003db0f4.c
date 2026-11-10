/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002DB0F4
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003db0f4; name: FUN_.text__003db0f4
 */


long * FUN__text__003db0f4(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *pvVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = FUN__text__003d91a4(*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar4 & 1) == 0) { // [自动静态注释] 条件判断/分支
    return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar9 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = *(long *)(lVar9 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = *(long *)(lVar9 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(byte *)(lVar9 + 4) >> 1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    if (lVar6 + 4U <= lVar9 + 0x98U) goto LAB__text__003db214; // [自动静态注释] 条件判断/分支
    pvVar1 = (void *)(lVar9 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    sVar3 = lVar6 - (long)pvVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(void **)(lVar9 + 0x50) = pvVar1;
    if (-1 < (long)sVar3) { // [自动静态注释] 条件判断/分支
      if (*(long *)(lVar7 + 0x10) + sVar3 <= *(ulong *)(lVar7 + 0x20)) { // [自动静态注释] 条件判断/分支
        memcpy((void *)(*(long *)(lVar7 + 0x18) + *(long *)(lVar7 + 0x10)),pvVar1,sVar3); // [自动静态注释] 内存复制、清零或移动
        *(size_t *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + sVar3;
LAB__text__003db214: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        **(undefined4 **)(lVar9 + 0x50) = 0x6c6c756e;
        *(long *)(lVar9 + 0x50) = *(long *)(lVar9 + 0x50) + 4;
        return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar4 = FUN__text__003d6a74(lVar7,pvVar1,sVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((uVar4 & 1) != 0) goto LAB__text__003db214; // [自动静态注释] 条件判断/分支
      goto LAB__text__003db1c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (lVar6 + 1U <= lVar9 + 0x98U) { // [自动静态注释] 条件判断/分支
LAB__text__003db260: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = *(undefined1 **)(lVar6 + 0x50) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((undefined1 *)(lVar6 + 0x98) < puVar2) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(lVar6 + 0x50) = 0;
        return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      **(undefined1 **)(lVar6 + 0x50) = 0xc0;
      *(undefined1 **)(lVar6 + 0x50) = puVar2;
      return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    pvVar1 = (void *)(lVar9 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    sVar3 = lVar6 - (long)pvVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(void **)(lVar9 + 0x50) = pvVar1;
    if (-1 < (long)sVar3) { // [自动静态注释] 条件判断/分支
      if (*(ulong *)(lVar7 + 0x20) < *(long *)(lVar7 + 0x10) + sVar3) { // [自动静态注释] 条件判断/分支
        uVar4 = FUN__text__003d6a74(lVar7,pvVar1,sVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((uVar4 & 1) == 0) goto LAB__text__003db1c0; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        memcpy((void *)(*(long *)(lVar7 + 0x18) + *(long *)(lVar7 + 0x10)),pvVar1,sVar3); // [自动静态注释] 内存复制、清零或移动
        *(size_t *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + sVar3;
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__003db260; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(lVar7 + 0x28) == 0) { // [自动静态注释] 条件判断/分支
    *(int *)(lVar7 + 0x28) = 0x16;
  } // [自动静态注释] 作用域/控制流边界
LAB__text__003db1c0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  piVar8 = (int *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar5 = (undefined4 *)FUN__text__003d9014(piVar8 + 4); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*piVar8 == 0) { // [自动静态注释] 条件判断/分支
    *piVar8 = 8;
  } // [自动静态注释] 作用域/控制流边界
  *puVar5 = 5;
  return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


