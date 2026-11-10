/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C6430
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c6430; name: FUN_.text__006c6430
 */


void FUN__text__006c6430(long param_1,long param_2,float *param_3,long param_4,float *param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_6c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar9 = *(long **)(param_4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(byte *)((long)plVar9 + 0x14) & 3) != 0) { // [自动静态注释] 条件判断/分支
    if ((((((((*(byte *)((long)plVar9 + 0x12) >> 1 & 1) == 0) && (*(char *)(param_1 + 0xe8) == -1)) // [自动静态注释] 条件判断/分支
           && (*(char *)(param_1 + 0xe9) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          ((*(char *)(param_1 + 0xea) == -1 && (*(char *)(param_1 + 0xeb) == -1)))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         ((*(char *)(param_1 + 0xec) == -1 && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          ((*(char *)(param_1 + 0xed) == -1 && (*(char *)(param_1 + 0xee) == -1)))))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (*(char *)(param_1 + 0xef) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (((((*(char *)(param_1 + 0xf0) == -1 && (*(char *)(param_1 + 0xf1) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (*(char *)(param_1 + 0xf2) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         (((*(char *)(param_1 + 0xf3) == -1 && (*(char *)(param_1 + 0xf4) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          ((*(char *)(param_1 + 0xf5) == -1 && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           ((*(char *)(param_1 + 0xf6) == -1 && (*(char *)(param_1 + 0xf7) == -1)))))))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (*(char *)(param_1 + 0x5a) == -1)))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar5 = FUN__text__006b4698(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar4 = FUN__text__006b4670(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*plVar9 + 0x20)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar9,param_2,param_6,1,0,param_1 + 0x70,param_1 + 0x50,param_1 + 0x48,uVar5,uVar4 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar1 = *(byte *)(param_1 + 0x10a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar5 = FUN__text__006b4698(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar4 = FUN__text__006b4670(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*plVar9 + 0x20)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar9,param_2,param_6,0,0,param_1 + 0x70,param_1 + 0x50,param_1 + 0x48,uVar5,uVar4 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar6 = FUN__text__006add38(*(undefined8 *)(param_4 + 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1d0) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe9)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1d4) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xea)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1d8) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xeb)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1dc) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1e0) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xed)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1e4) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xee)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1e8) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xef)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1ec) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1f0) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf1)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 500) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf2)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1f8) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf3)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1fc) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x200) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf5)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x204) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf6)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x208) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf7)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x20c) = uVar10;
      bVar1 = *(byte *)(param_1 + 0x10a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if ((bVar1 & 1) != 0) { // [自动静态注释] 条件判断/分支
      lVar6 = FUN__text__006add38(*(undefined8 *)(param_4 + 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(lVar6 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(lVar6 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
      *(float *)(lVar6 + 0x1a0) = *param_5;
      *(float *)(lVar6 + 0x1a4) = param_5[1];
      *(float *)(lVar6 + 0x1a8) = param_5[2];
      *(float *)(lVar6 + 0x1ac) = param_5[3];
    } // [自动静态注释] 作用域/控制流边界
    uVar10 = 0x40000c13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(byte *)(param_1 + 0x10a) & 1) != 0) { // [自动静态注释] 条件判断/分支
      uVar10 = 0xc13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar6 = FUN__text__006add38(*(undefined8 *)(param_4 + 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(lVar6 + 0x22c) = uVar10;
    local_70 = *param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_6c = *(undefined4 *)(param_1 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = *(undefined8 *)param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = FUN__text__006add38(*(undefined8 *)(param_4 + 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0069d930(param_2,uVar5,&local_68,&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
    pbVar7 = *(byte **)(param_2 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *(long *)(*(long *)(param_2 + 0xb8) + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = lVar6 + 0x22fU & -lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*pbVar7 & 1) == 0) { // [自动静态注释] 条件判断/分支
      lVar6 = *(long *)(pbVar7 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ulong *)(pbVar7 + 0x40) = lVar6 + uVar8;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar9 = *(long **)(pbVar7 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        lVar6 = *plVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar3) { // [自动静态注释] 条件判断/分支
          *plVar9 = lVar6 + uVar8;
          cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    **(undefined4 **)(param_1 + 0x120) = (int)lVar6;
    lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
      __dest = (void *)(lVar6 + (ulong)**(uint **)(param_1 + 0x120)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __src = (void *)FUN__text__006add38(*(undefined8 *)(param_4 + 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      memcpy(__dest,__src,0x230); // [自动静态注释] 内存复制、清零或移动
      uVar10 = 0x40020503; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*(byte *)(param_1 + 0x10a) & 1) != 0) { // [自动静态注释] 条件判断/分支
        uVar10 = 0x20503; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)((long)__dest + 0x22c) = uVar10;
      uStack_6c = *(undefined4 *)(param_1 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_70 = param_5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68 = CONCAT44(param_3[1],(*param_3 + *(float *)(param_1 + 0x50)) - local_70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__0069d930(param_2,__dest,&local_68,&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


