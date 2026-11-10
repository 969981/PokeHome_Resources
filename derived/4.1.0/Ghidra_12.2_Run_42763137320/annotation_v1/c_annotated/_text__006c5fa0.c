/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C5FA0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c5fa0; name: FUN_.text__006c5fa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006c5fa0(long param_1,long param_2,float *param_3,long param_4,undefined4 *param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_6c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  bVar7 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((((((*(char *)(param_1 + 0xe8) == -1) && (*(char *)(param_1 + 0xe9) == -1)) && // [自动静态注释] 条件判断/分支
        (*(char *)(param_1 + 0xea) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       ((bVar7 = true, *(char *)(param_1 + 0xeb) == -1 && (*(char *)(param_1 + 0xec) == -1)))) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (((*(char *)(param_1 + 0xed) == -1 && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        ((*(char *)(param_1 + 0xee) == -1 && (*(char *)(param_1 + 0xef) == -1)))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (*(char *)(param_1 + 0xf0) == -1)))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
     ((((*(char *)(param_1 + 0xf1) == -1 && (*(char *)(param_1 + 0xf2) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (*(char *)(param_1 + 0xf3) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (((*(char *)(param_1 + 0xf4) == -1 && (*(char *)(param_1 + 0xf5) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       ((*(char *)(param_1 + 0xf6) == -1 && (*(char *)(param_1 + 0xf7) == -1)))))))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    bVar7 = *(char *)(param_1 + 0x5a) != -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  bVar3 = *(byte *)(param_1 + 0x10a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar11 = 0x40000503; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar12 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar6 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((bVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
    uVar11 = 0x503; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    pbVar1 = (byte *)(param_4 + lVar12 * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar13 = *(long **)(pbVar1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((bVar7) || ((*(byte *)((long)plVar13 + 0x12) >> 1 & 1) != 0)) { // [自动静态注释] 条件判断/分支
      uVar9 = FUN__text__006b4698(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar8 = FUN__text__006b4670(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*plVar13 + 0x20)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar13,param_2,param_6,0,0,param_1 + 0x70,param_1 + 0x50,param_1 + 0x48,uVar9, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 uVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if ((bVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
        lVar10 = FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined4 *)(lVar10 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(lVar10 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(lVar10 + 0x1a0) = *param_5;
        *(undefined4 *)(lVar10 + 0x1a4) = param_5[1];
        *(undefined4 *)(lVar10 + 0x1a8) = param_5[2];
        *(undefined4 *)(lVar10 + 0x1ac) = param_5[3];
        lVar10 = FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar10 + 0x1d0) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe9)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar10 + 0x1d4) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xea)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar10 + 0x1d8) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xeb)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar10 + 0x1dc) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar10 + 0x1e0) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xed)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar10 + 0x1e4) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xee)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar10 + 0x1e8) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xef)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar10 + 0x1ec) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar10 + 0x1f0) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf1)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar10 + 500) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf2)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar10 + 0x1f8) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf3)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar10 + 0x1fc) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar10 + 0x200) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf5)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar10 + 0x204) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf6)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar10 + 0x208) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf7)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar10 + 0x20c) = uVar14;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar9 = FUN__text__006b4698(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar8 = FUN__text__006b4670(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*plVar13 + 0x20)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar13,param_2,param_6,1,0,param_1 + 0x70,param_1 + 0x50,param_1 + 0x48,uVar9, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 uVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if ((bVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
        lVar10 = FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined4 *)(lVar10 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(lVar10 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(lVar10 + 0x1a0) = *param_5;
        *(undefined4 *)(lVar10 + 0x1a4) = param_5[1];
        *(undefined4 *)(lVar10 + 0x1a8) = param_5[2];
        *(undefined4 *)(lVar10 + 0x1ac) = param_5[3];
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    if (bVar6) { // [自动静态注释] 条件判断/分支
      _local_70 = CONCAT44(*(undefined4 *)(param_1 + 0x54),*param_5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68 = *(undefined8 *)param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__006c63bc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar4 = *(uint *)(_DAT_008a6aa8 + (ulong)*pbVar1 * 4) | *(uint *)(_DAT_008a6ab0 + lVar12 * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = uVar4 | 0x40000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((bVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
        uVar2 = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      lVar12 = FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(uint *)(lVar12 + 0x22c) = uVar2;
      __dest = (void *)FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      _local_70 = CONCAT44(*(undefined4 *)(param_1 + 0x54),param_5[1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68 = CONCAT44(param_3[1],(*param_3 + *(float *)(param_1 + 0x50)) - (float)param_5[1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*(byte *)(param_1 + 0x10a) >> 1 & 1) == 0) goto LAB__text__006c63bc; // [自动静态注释] 条件判断/分支
      __dest = (void *)FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      __src = (void *)FUN__text__006add38(*(undefined8 *)(param_4 + 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      memcpy(__dest,__src,0x230); // [自动静态注释] 内存复制、清零或移动
      *(uint *)((long)__dest + 0x22c) = *(uint *)(_DAT_008a6aa8 + (ulong)*pbVar1 * 4) | uVar11;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__0069d930(param_2,__dest,&local_68,&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar12 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(byte *)(*(long *)(pbVar1 + 8) + 0x48) =
         *(byte *)(*(long *)(pbVar1 + 8) + 0x48) & 0xf0 | *(byte *)(param_2 + 0x193) & 0xf;
    bVar5 = !bVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (bVar5) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


