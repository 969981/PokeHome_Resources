/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00474FB8
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00574fb8; name: FUN_.text__00574fb8
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00574fb8(long param_1,long *param_2,undefined8 param_3,long param_4,uint *param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar10 = *param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x158) = param_4;
  *(long **)(param_1 + 0x160) = param_2;
  *(uint *)(param_1 + 0x130) = uVar10;
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_4 + 0x74);
  uVar4 = *(undefined8 *)(param_4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = *(undefined8 *)(param_4 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x178) = uVar6;
  *(undefined8 *)(param_1 + 0x168) = uVar4;
  fVar11 = 1.0 / (float)uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(undefined8 *)(param_4 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = *(undefined8 *)(param_4 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = *(undefined8 *)(param_4 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_4 + 0x30);
  *(undefined8 *)(param_1 + 0x198) = uVar7;
  *(undefined8 *)(param_1 + 0x180) = uVar4;
  *(undefined8 *)(param_1 + 0x188) = uVar6;
  uVar7 = *(undefined8 *)(param_4 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(undefined8 *)(param_4 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = *(undefined8 *)(param_4 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_4 + 0x58);
  *(undefined8 *)(param_1 + 0x1a8) = uVar6;
  *(undefined8 *)(param_1 + 0x1b0) = uVar7;
  *(undefined8 *)(param_1 + 0x1a0) = uVar4;
  cVar2 = *(char *)(param_4 + 0x99) << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(char *)(param_1 + 0x138) = cVar2;
  cVar1 = '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_5[1] & 0xfffff000) != 0x8000) { // [自动静态注释] 条件判断/分支
    cVar1 = cVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(char *)(param_1 + 0x138) = cVar1;
  *(float *)(param_1 + 0x78) = 1.0 - fVar11 * *(float *)(param_4 + 0xbc) * 6.2831855;
  *(float *)(param_1 + 0x84) = 1.0 - fVar11 * *(float *)(param_4 + 0xbc) * 6.2831855;
  *(float *)(param_1 + 0x90) = 1.0 - fVar11 * *(float *)(param_4 + 0xbc) * 6.2831855;
  *(float *)(param_1 + 0x9c) = 1.0 - fVar11 * *(float *)(param_4 + 0xbc) * 6.2831855;
  *(float *)(param_1 + 0xa8) = 1.0 - fVar11 * *(float *)(param_4 + 0xbc) * 6.2831855;
  *(float *)(param_1 + 0xb4) = 1.0 - fVar11 * *(float *)(param_4 + 0xbc) * 6.2831855;
  uVar4 = FUN__text__00575330(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((int)uVar4 == 1) && (uVar4 = FUN__text__005754a0(param_1,param_2), (int)uVar4 == 1)) { // [自动静态注释] 条件判断/分支
    lVar9 = *(long *)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = *(uint *)(param_1 + 0x130); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(char *)(param_1 + 0x138) != '\0') { // [自动静态注释] 条件判断/分支
      fVar11 = exp2f(*(float *)(lVar9 + 100) * 0.01); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = (ulong)*(uint *)(lVar9 + 0x5c) * 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar11 = (float)NEON_fminnm(**(float **)(lVar3 + 0x892bb0) * fVar11, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                                  **(float **)(lVar3 + 0x892bc0) * fVar11);
      if ((int)(fVar11 * (float)uVar10 * 0.001) != 0) { // [自动静态注释] 条件判断/分支
        uVar4 = FUN__text__0057c744(param_1 + 0xb8,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((int)uVar4 != 1) { // [自动静态注释] 条件判断/分支
          return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        lVar9 = *(long *)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar10 = *(uint *)(param_1 + 0x130); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    if ((int)(*(float *)(lVar9 + 0x60) * 0.001 * (float)uVar10) != 0) { // [自动静态注释] 条件判断/分支
      uVar4 = FUN__text__0057c744(param_1 + 0xd0,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((int)uVar4 != 1) { // [自动静态注释] 条件判断/分支
        return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar9 = *(long *)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (*(char *)(param_1 + 0x138) != '\0') { // [自动静态注释] 条件判断/分支
      uVar10 = *(uint *)(lVar9 + 0x5c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,800,0x715356,0x1b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar5 == (undefined4 *)0x0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x150) = 0;
        return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      *puVar5 = 0;
      memset(puVar5 + 2,0,0x314); // [自动静态注释] 内存复制、清零或移动
      *(undefined4 **)(param_1 + 0x150) = puVar5;
      lVar9 = (ulong)uVar10 * 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = FUN__text__0057cb70(*(undefined4 *)(*(long *)(param_1 + 0x158) + 100),puVar5,param_2, // [自动静态注释] 调用尚未恢复正式名称的函数
                                  *(undefined8 *)(lVar9 + 0x892bb0),
                                  *(undefined8 *)(lVar9 + 0x892bc0),
                                  *(undefined4 *)(lVar9 + 0x892ba8),
                                  *(undefined4 *)(lVar9 + 0x892bb8),*(undefined4 *)(param_1 + 0x130)
                                 ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if ((int)uVar4 != 1) { // [自动静态注释] 条件判断/分支
        return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if (*(char *)(param_1 + 0x138) != '\0') { // [自动静态注释] 条件判断/分支
        fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar8 = (int)(*(float *)(*(long *)(param_1 + 0x158) + 0x68) * 0.001 * fVar11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar8 != 0) { // [自动静态注释] 条件判断/分支
          uVar10 = param_5[1] >> 8 & 0xf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((uVar10 == 2) || ((uVar10 == 1 && ((param_5[1] & 0x210000) != 0)))) { // [自动静态注释] 条件判断/分支
            uVar4 = FUN__text__0057c744(param_1 + 0xe8,param_2,iVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
            if ((int)uVar4 != 1) { // [自动静态注释] 条件判断/分支
              return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
            } // [自动静态注释] 作用域/控制流边界
            uVar4 = FUN__text__0057c744(param_1 + 0x100,param_2,iVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
            if ((int)uVar4 != 1) { // [自动静态注释] 条件判断/分支
              return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = FUN__text__005759c0(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((int)uVar4 == 1) { // [自动静态注释] 条件判断/分支
      fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)(param_1 + 0x120) =
           (int)((*(float *)(*(long *)(param_1 + 0x158) + 8) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(float *)(*(long *)(param_1 + 0x158) + 0x60) * 0.001) * fVar11);
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


