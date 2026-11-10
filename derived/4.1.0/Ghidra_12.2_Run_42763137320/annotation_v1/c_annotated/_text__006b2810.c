/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B2810
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b2810; name: FUN_.text__006b2810
 */


void FUN__text__006b2810(long param_1,long param_2,undefined8 param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar8 = *(undefined8 *)(param_2 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x3c) = uVar8;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  *(undefined1 *)(param_1 + 0x5b) = *(undefined1 *)(param_2 + 0x5b);
  *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  uVar8 = *(undefined8 *)(param_2 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x98) = uVar8;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  uVar8 = *(undefined8 *)(param_2 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x80) = uVar8;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN__text__006b2090(param_1,param_2 + 0xb0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0xc9) = *(undefined8 *)(param_2 + 0xc9);
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xdf | 0x10;
  __src = *(void **)(param_2 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(byte *)(param_1 + 0x5c) & 0x44) == 0) { // [自动静态注释] 条件判断/分支
    *(void **)(param_1 + 0xa8) = __src;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    __dest = (void *)FUN__text__006a0f04(*(undefined4 *)((long)__src + 4)); // [自动静态注释] 调用尚未恢复正式名称的函数
    memcpy(__dest,__src,(ulong)*(uint *)((long)__src + 4)); // [自动静态注释] 内存复制、清零或移动
    *(void **)(param_1 + 0xa8) = __dest;
    if ((__dest != (void *)0x0) && (*(char *)((long)__dest + 0x16) == '\x03')) { // [自动静态注释] 条件判断/分支
      puVar12 = (uint *)((long)__dest + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = (ulong)*(ushort *)((long)__dest + (ulong)uVar4 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar9 != 0) { // [自动静态注释] 条件判断/分支
        uVar10 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        piVar2 = (int *)((long)__dest + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (ulong)(*(int *)((long)__dest + (ulong)uVar4 + 0x10) + uVar4) + 0xc); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        do { // [自动静态注释] 循环/迭代
          uVar11 = (ulong)(*(int *)((long)puVar12 + uVar10 * 4 + (ulong)*puVar12) + *puVar12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(uint *)(param_1 + 0x60) =
               *(uint *)(param_1 + 0x60) |
               1 << (ulong)(*(uint *)((long)__dest + uVar11 + 0xc) & 0x1f); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (*piVar2 == 0x15) { // [自动静态注释] 条件判断/分支
            iVar5 = *(int *)((long)__dest + uVar11 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            iVar3 = iVar5 + -9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (iVar5 < 0x10) { // [自动静态注释] 条件判断/分支
              iVar3 = iVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            *(char *)((long)piVar2 + (long)iVar3 + 4) = (char)uVar10;
          } // [自动静态注释] 作用域/控制流边界
          uVar10 = uVar10 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (uVar9 != uVar10); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(param_2 + 0x60) != 0) { // [自动静态注释] 条件判断/分支
    lVar7 = *(long *)(param_2 + 0xa8) + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = *(uint *)(*(long *)(param_2 + 0xa8) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar2 = (int *)(lVar7 + (ulong)(*(int *)(lVar7 + (ulong)uVar4 + 4) + uVar4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*piVar2 == 0x15) && (bVar6 = *(byte *)(piVar2 + 3), -1 < (char)bVar6)) { // [自动静态注释] 条件判断/分支
      uVar8 = *(undefined8 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               (lVar7 + (ulong)(*(int *)(lVar7 + (ulong)uVar4 + 4 + (ulong)bVar6 * 4) + uVar4) + 8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar7 = FUN__text__006a0f04(0x230); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar7 != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__006b5b90(lVar7,uVar8,param_1,param_3,param_4,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      lVar1 = *(long *)(param_1 + 0xa8) + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar4 + 4 +
                                                 (ulong)*(byte *)(lVar1 + (ulong)(*(int *)(lVar1 + ( // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                  ulong)uVar4 + 4) + uVar4) + 0xc) * 4) + uVar4) + 8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               ) = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


