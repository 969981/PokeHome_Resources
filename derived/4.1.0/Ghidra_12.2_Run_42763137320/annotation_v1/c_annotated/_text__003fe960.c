/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002FE960
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fe960; name: FUN_.text__003fe960
 */


void FUN__text__003fe960(long param_1,int param_2,uint param_3,long *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_3 != 0) { // [自动静态注释] 条件判断/分支
    uVar6 = (param_2 - 1U) / param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = param_1 + 0x38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = param_3 + param_3 * uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if ((iVar4 - 1U < *(uint *)(param_1 + 0x344)) && // [自动静态注释] 条件判断/分支
       (uVar7 = FUN__text__003ff320(lVar1,iVar4), uVar7 != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar8 = (ulong *)FUN__text__00400f80(7,0x28); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (puVar8 != (ulong *)0x0) { // [自动静态注释] 条件判断/分支
        *puVar8 = 0;
        puVar8[1] = uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar8[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(int *)((long)puVar8 + 0x1c) = iVar4;
        *(undefined4 *)(puVar8 + 4) = 0xffffffff;
        *(undefined2 *)((long)puVar8 + 0x24) = 0;
        *(int *)(puVar8 + 3) = param_2;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar4;
        *param_4 = (long)puVar8;
LAB__text__003feba0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(short *)((long)puVar8 + 0x24) = *(short *)((long)puVar8 + 0x24) + 1;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__003ff460(lVar1,(int)uVar7 - *(int *)(param_1 + 0x338),iVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *param_4 = 0;
    lVar10 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_4 = lVar10;
    if (lVar10 == 0) { // [自动静态注释] 条件判断/分支
      FUN__text__003fe0e8(*(undefined8 *)(param_1 + 0x360)); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - *(int *)(lVar10 + 0x18);
    lVar10 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar10 != 0) { // [自动静态注释] 条件判断/分支
      lVar12 = *(long *)(lVar10 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar12 == 0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x10) = 0;
      } // [自动静态注释] 作用域/控制流边界
      *(long *)(param_1 + 0x18) = lVar12;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(*param_4 + 0x10) = 0;
    puVar8 = (ulong *)*param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar9 = *(int *)((long)puVar8 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar9 == iVar4) goto LAB__text__003feba0; // [自动静态注释] 条件判断/分支
    uVar6 = (uint)puVar8[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar6 != 0xffffffff) { // [自动静态注释] 条件判断/分支
      uVar3 = *(uint *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar11 = uVar3 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar13 = iVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        while( true ) { // [自动静态注释] 循环/迭代
          iVar5 = iVar13 - iVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (iVar5 < 0) { // [自动静态注释] 条件判断/分支
            iVar5 = iVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          uVar2 = iVar9 + (iVar5 >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar14 = *(ulong **)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (uVar6 < (uint)puVar14[4]) break; // [自动静态注释] 条件判断/分支
          if (uVar6 <= (uint)puVar14[4]) { // [自动静态注释] 条件判断/分支
            if (*puVar14 < *puVar8) break; // [自动静态注释] 条件判断/分支
            if (*puVar14 <= *puVar8) { // [自动静态注释] 条件判断/分支
              if (puVar8[1] < puVar14[1]) break; // [自动静态注释] 条件判断/分支
              if (puVar8[1] <= puVar14[1]) { // [自动静态注释] 条件判断/分支
                if (uVar2 + 1 < uVar3) { // [自动静态注释] 条件判断/分支
                  __dest = (void *)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  memmove(__dest,(void *)((long)__dest + 8),(ulong)((uVar3 + ~uVar2) * 8)); // [自动静态注释] 内存复制、清零或移动
                  iVar11 = *(int *)(param_1 + 0x30) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                } // [自动静态注释] 作用域/控制流边界
                *(int *)(param_1 + 0x30) = iVar11;
                goto LAB__text__003fe9b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              } // [自动静态注释] 作用域/控制流边界
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
          iVar9 = uVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (iVar13 < iVar9) goto LAB__text__003fe9b0; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        iVar13 = uVar2 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (iVar9 <= iVar13); // [自动静态注释] 循环/迭代
LAB__text__003fe9b0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined4 *)(puVar8 + 4) = 0xffffffff;
      puVar8 = (ulong *)*param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar9 = *(int *)((long)puVar8 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar9;
    FUN__text__003ff460(lVar1,(int)puVar8[1] - *(int *)(param_1 + 0x338), // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined4 *)((long)puVar8 + 0x1c));
    FUN__text__00400fc0(7,puVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003fe0c8(*(undefined8 *)(param_1 + 0x360)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *param_4 = 0;
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


