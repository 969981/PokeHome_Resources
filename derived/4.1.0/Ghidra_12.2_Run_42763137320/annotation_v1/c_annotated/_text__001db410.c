/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000DB410
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001db410; name: FUN_.text__001db410
 */


void FUN__text__001db410(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_130; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint auStack_12c [25]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_c8 [26]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar14 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__001db728: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  piVar2 = (int *)(param_1 + 0x8b3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = (undefined8 *)(param_1 + 0x89c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x8ba0) != '\0') { // [自动静态注释] 条件判断/分支
    lVar13 = *(long *)(lVar14 + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar13 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    puVar1 = (undefined8 *)(param_1 + 0x89f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = FUN__text__0019cc24(lVar13,param_1 + 0x89e8,puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar10 & 1) != 0) { // [自动静态注释] 条件判断/分支
      if (*(long *)(*(long *)(param_1 + 0x89d0) + 0xe8) != 0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(*(long *)(param_1 + 0x89d0) + 0xe8) = 0;
      } // [自动静态注释] 作用域/控制流边界
      iVar7 = FUN__text__0019b770(*puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (iVar7 != 0) { // [自动静态注释] 条件判断/分支
        uVar10 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar10 = uVar10 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          while( true ) { // [自动静态注释] 循环/迭代
            iVar15 = iVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar9 = auStack_12c[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            lVar11 = *(long *)(param_1 + 0x89d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            auStack_12c[0] = auStack_12c[0] & 0xffffff00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar4 = (ulong *)(*(long *)(lVar11 + 0xe0) + *(long *)(lVar11 + 0xe8) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            local_130 = iVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (*(long *)(lVar11 + 0xe8) == *(long *)(lVar11 + 0xf0)) break; // [自动静态注释] 条件判断/分支
            if (*(long *)(uVar10 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
              FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
            } // [自动静态注释] 作用域/控制流边界
            *(undefined8 *)(uVar10 + *(long *)(uVar10 + 0x98) * 8 + 0x18) =
                 *(undefined8 *)(lVar11 + 0xa0);
            *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
            *puVar4 = CONCAT44(uVar9,iVar15) & 0xffffff00ffffffff;
            *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
            *(long *)(lVar11 + 0xe8) = *(long *)(lVar11 + 0xe8) + 1;
            iVar5 = iVar15 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (iVar7 == iVar15 + 1) goto LAB__text__001db544; // [自动静态注释] 条件判断/分支
          } // [自动静态注释] 作用域/控制流边界
          FUN__text__001de570(local_c8,lVar11 + 0xa0,puVar4,1,&local_130); // [自动静态注释] 调用尚未恢复正式名称的函数
          iVar5 = iVar15 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (iVar7 != iVar15 + 1); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
LAB__text__001db544: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__003b17ec(*puVar3,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003b17f8(*puVar3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003ad2d0(*puVar3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined2 *)(param_1 + 0x8ba1) = 0x101;
      uVar8 = FUN__text__0019b770(*(undefined8 *)(param_1 + 0x89e8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(param_1 + 0x8ba4) = uVar8;
      uVar8 = FUN__text__0019b770(*(undefined8 *)(param_1 + 0x89f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(param_1 + 0x8ba8) = uVar8;
      FUN__text__0019c35c(&local_130); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__0019a14c(puVar1,&local_130); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar10 = FUN__text__0019c518(piVar2,&local_130); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((uVar10 & 1) == 0) { // [自动静态注释] 条件判断/分支
        FUN__text__0019cd08(lVar13,piVar2,*(undefined1 *)(param_1 + 0x8ba3)); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(bool *)(param_1 + 0x8ba1) = *piVar2 == local_130;
        bVar6 = FUN__text__0019c1d8(param_1 + 0x8b40,auStack_12c); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined1 *)(param_1 + 0x8ba3) = 0;
        *(byte *)(param_1 + 0x8ba2) = bVar6 & 1;
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined1 *)(param_1 + 0x8ba0) = 0;
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__001d7830(*(undefined8 *)(param_1 + 0x38),*piVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__0019c35c(local_c8); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__001d91d8(*(undefined8 *)(param_1 + 0x40),*piVar2 != local_c8[0]); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__001db72c(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__001d9160(*(undefined8 *)(param_1 + 0x40),*(int *)(param_1 + 0x8ba8) != 0); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (((*(long *)(param_1 + 0x18) == 0) || // [自动静态注释] 条件判断/分支
          (lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0x718), lVar11 == 0)) || // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
         (*(long *)(lVar11 + 0x168) == 0)) goto LAB__text__001db728; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      iVar7 = FUN__text__001c693c(); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__001d911c(*(undefined8 *)(param_1 + 0x40),iVar7 != 0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)(param_1 + 0x8a08) == '\0') { // [自动静态注释] 条件判断/分支
    if (*(char *)(param_1 + 0x8b38) == '\0') { // [自动静态注释] 条件判断/分支
      FUN__text__0019c35c(local_c8); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar12 = *(undefined8 *)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = FUN__text__0019c518(param_1 + 0x8b3c,local_c8); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__001d90e8(uVar12,(uVar9 ^ 0xffffffff) & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__0019c35c(local_c8); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar12 = *(undefined8 *)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = FUN__text__0019c518(param_1 + 0x8b3c,local_c8); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__001d91a4(uVar12,(uVar9 ^ 0xffffffff) & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__001d8f78(*(undefined8 *)(param_1 + 0x40),**(int **)(lVar14 + 0x50) != 0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


