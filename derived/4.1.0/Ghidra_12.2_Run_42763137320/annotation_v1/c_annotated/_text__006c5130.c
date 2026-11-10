/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C5130
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c5130; name: FUN_.text__006c5130
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006c5130(long param_1,undefined8 param_2,undefined8 *param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        float *param_5,undefined4 param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_9c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_94; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_8c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_84; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_74; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_6c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_64; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_80 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fStack_9c = param_5[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fStack_84 = param_5[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90 = *param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_98 = param_5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pfVar9 = (float *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = *pfVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar15 = *(float *)(param_1 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fStack_70 = (float)local_80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_74 = (float)((ulong)local_80 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar5 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar3 = *(byte *)(param_1 + 0x10a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fStack_68 = local_90 + fStack_70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_6c = local_74 - fStack_9c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = (local_88 + fStack_70) - local_98; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0 = local_88 - local_98; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = local_88 - local_90; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fStack_8c = fVar15 - fStack_9c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fStack_94 = fVar15 - fStack_84; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_64 = (local_74 - fVar15) + fStack_84; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((((*(char *)(param_1 + 0xe8) == -1) && (*(char *)(param_1 + 0xe9) == -1)) && // [自动静态注释] 条件判断/分支
       (*(char *)(param_1 + 0xea) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      ((bVar5 = true, *(char *)(param_1 + 0xeb) == -1 && (*(char *)(param_1 + 0xec) == -1)))) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
     ((((*(char *)(param_1 + 0xed) == -1 && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        ((*(char *)(param_1 + 0xee) == -1 && (*(char *)(param_1 + 0xef) == -1)))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (*(char *)(param_1 + 0xf0) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      ((((*(char *)(param_1 + 0xf1) == -1 && (*(char *)(param_1 + 0xf2) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (*(char *)(param_1 + 0xf3) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (((*(char *)(param_1 + 0xf4) == -1 && (*(char *)(param_1 + 0xf5) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        ((*(char *)(param_1 + 0xf6) == -1 && (*(char *)(param_1 + 0xf7) == -1)))))))))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    bVar5 = *(char *)(param_1 + 0x5a) != -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar10 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar11 = (undefined8 *)(param_4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar12 = _DAT_008a6a88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    plVar13 = (long *)*puVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((plVar13 != (long *)0x0) && ((*(byte *)((long)plVar13 + 0x14) & 3) != 0)) { // [自动静态注释] 条件判断/分支
      if ((bVar5) || ((*(byte *)((long)plVar13 + 0x12) >> 1 & 1) != 0)) { // [自动静态注释] 条件判断/分支
        uVar7 = FUN__text__006b4698(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar6 = FUN__text__006b4670(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        (**(code **)(*plVar13 + 0x20)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (plVar13,param_2,param_6,0,0,param_1 + 0x70,pfVar9,param_1 + 0x48,uVar7,uVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if ((bVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
          lVar8 = FUN__text__006add38(*puVar11,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(undefined4 *)(lVar8 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
          *(undefined4 *)(lVar8 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
          *(float *)(lVar8 + 0x1a0) = *param_5;
          *(float *)(lVar8 + 0x1a4) = param_5[1];
          *(float *)(lVar8 + 0x1a8) = param_5[2];
          *(float *)(lVar8 + 0x1ac) = param_5[3];
          lVar8 = FUN__text__006add38(*puVar11,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(lVar8 + 0x1d0) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe9)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(lVar8 + 0x1d4) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xea)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(lVar8 + 0x1d8) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xeb)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(lVar8 + 0x1dc) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(lVar8 + 0x1e0) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xed)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(lVar8 + 0x1e4) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xee)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(lVar8 + 0x1e8) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xef)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(lVar8 + 0x1ec) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(lVar8 + 0x1f0) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf1)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(lVar8 + 500) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf2)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(lVar8 + 0x1f8) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf3)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(lVar8 + 0x1fc) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(lVar8 + 0x200) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf5)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(lVar8 + 0x204) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf6)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(lVar8 + 0x208) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf7)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(lVar8 + 0x20c) = uVar14;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar7 = FUN__text__006b4698(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar6 = FUN__text__006b4670(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        (**(code **)(*plVar13 + 0x20)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (plVar13,param_2,param_6,1,0,param_1 + 0x70,pfVar9,param_1 + 0x48,uVar7,uVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if ((bVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
          lVar8 = FUN__text__006add38(*puVar11,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(undefined4 *)(lVar8 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
          *(undefined4 *)(lVar8 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
          *(float *)(lVar8 + 0x1a0) = *param_5;
          *(float *)(lVar8 + 0x1a4) = param_5[1];
          *(float *)(lVar8 + 0x1a8) = param_5[2];
          *(float *)(lVar8 + 0x1ac) = param_5[3];
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      uVar7 = *puVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((lVar10 != 0) && ((bVar3 >> 1 & 1) != 0)) { // [自动静态注释] 条件判断/分支
        __dest = (void *)FUN__text__006add38(uVar7,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar7 = *(undefined8 *)((long)__dest + 0x1c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = *(undefined8 *)((long)__dest + 0x1c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        __src = (void *)FUN__text__006add38(*(undefined8 *)(param_4 + 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        memcpy(__dest,__src,0x230); // [自动静态注释] 内存复制、清零或移动
        *(undefined8 *)((long)__dest + 0x1c0) = uVar7;
        *(undefined8 *)((long)__dest + 0x1c8) = uVar2;
        uVar7 = *puVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar4 = *(uint *)(_DAT_008a6a90 + (ulong)*(byte *)(puVar11 + -1) * 4) | *puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = uVar4 | 0x40000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((bVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
        uVar1 = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      lVar8 = FUN__text__006add38(uVar7,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(uint *)(lVar8 + 0x22c) = uVar1;
      uVar7 = FUN__text__006add38(*puVar11,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__0069d930(param_2,uVar7,(long)&local_80 + lVar10,(long)&local_a0 + lVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    lVar10 = lVar10 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar11 = puVar11 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar12 = puVar12 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar10 != 0x20); // [自动静态注释] 循环/迭代
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


